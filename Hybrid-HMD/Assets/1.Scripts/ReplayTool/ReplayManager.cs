using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class ReplayManager : MonoBehaviour
{
    // session info
    [SerializeField] private string userID;
    [SerializeField] private int conditionID;
    [SerializeField] private string folderPath = "/Users/SY/Documents/LogFiles/";
    private bool isPlaying = false;
    private Camera cam;
    [SerializeField] private GameObject phone;

    [SerializeField] private int currentTrial = 0;

    // private members
    [SerializeField]
    private List<string> gazeLog;
    private List<string> headLog;
    private List<string> phoneLog;
    private bool isDataLoaded => (gazeLog.Count > 0);
    private const int headerRows = 2;
    private int replayIndex = headerRows;
    private bool isPhoneActive;

    private List<RaycastHit> rayHitList;
    private LineRenderer lineRenderer;

    private ConditionManager conditionManager;
    private HeatmapPixelsTime heatmap;

    //public members
    [SerializeField] private bool isPathEnabled = false;
    [SerializeField] private bool isRayEnabled = false;
    [SerializeField] private bool isFrustrumEnabled = false;

    void Start()
    {
        conditionManager = GetComponent<ConditionManager>();
        heatmap = GetComponent<HeatmapPixelsTime>();
        cam = Camera.main;

        SetLineRenderer();
    }

    void Update()
    {
        if (isPlaying)
        {
            Play();
            GetHeadPose();
            if (isPhoneActive)
                GetPhonePose();
        }
    }

    public void LoadSession()
    {
        isPhoneActive = (conditionID >= 5) ? true : false;

        gazeLog = LoadFile(FileName("gaze"));
        headLog = LoadFile(FileName("head"));
        if (isPhoneActive) phoneLog = LoadFile(FileName("phone"));

        LoadScene(conditionID);
    }
    private String FileName(string type) => $"{folderPath}{userID}/{userID}_{conditionID}_{type}.csv";
    private void LoadScene(int condID) => conditionManager.SwitchCondition(condID);

    private void GetHeadPose()
    {
        string[] split = headLog[replayIndex].Split(',');
        Vector3? headPos = GetPos(split[2], split[3], split[4]);
        Quaternion? headRot = GetRot(split[5], split[6], split[7], split[8]);

        if (headPos.HasValue && headRot.HasValue)
        {
            cam.transform.position = (Vector3)headPos;
            cam.transform.rotation = (Quaternion)headRot;
        }
    }
    private void GetPhonePose()
    {
        string[] split = phoneLog[replayIndex].Split(',');
        Vector3? phonePos = GetPos(split[2], split[3], split[4]);
        Quaternion? phoneRot = GetRot(split[5], split[6], split[7], split[8]);

        if (phonePos.HasValue && phoneRot.HasValue)
        {
            phone.transform.position = (Vector3)phonePos;
            phone.transform.rotation = (Quaternion)phoneRot;
        }
    }


    private void SetLineRenderer()
    {
        lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.widthMultiplier = 0.005f;
        lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        lineRenderer.startColor = Color.cyan;
        lineRenderer.endColor = Color.cyan;
        lineRenderer.useWorldSpace = true;
        lineRenderer.positionCount = 0;
    }


    private List<string> LoadFile(string filename)
    {
        var loggedLines = new List<string>();
        rayHitList = new List<RaycastHit>();

        try
        {
            if (!File.Exists(filename))
            {
                Debug.LogError("Playback log file does not exist! " + filename);
                return null;
            }

            using (StreamReader sr = new StreamReader(new FileStream(filename, FileMode.Open)))
            {
                string line;
                while ((line = sr.ReadLine()) != null)
                    loggedLines.Add(line);
            }
        }
        catch (Exception e)
        {
            Debug.Log("The file could not be read:");
            Debug.Log(e.Message);
        }

        return loggedLines;
    }

    public void Play()
    {
        if (isDataLoaded)
        {
            if (replayIndex < gazeLog.Count - 1)
            {
                isPlaying = true;
                replayIndex++;
            }
            else
                isPlaying = false;
        }
    }

    private void OnDrawGizmos()
    {
        if (isPlaying)
        {
            Ray? ray = GetGazeRay(gazeLog[replayIndex]);

            if (ray.HasValue)
            {
                Ray gazeRay = (Ray)ray;
                Gizmos.color = Color.cyan;

                if (isFrustrumEnabled)
                    Gizmos.DrawFrustum(Vector3.zero, 29f, 10f, 0.3f, 1.46f);

                if (Physics.Raycast(gazeRay, out var hit))
                {
                    lineRenderer.positionCount++;
                    rayHitList.Add(hit);

                    if (isRayEnabled)
                        Gizmos.DrawRay(gazeRay.origin, hit.point);
                    if (isPathEnabled)
                        lineRenderer.SetPosition(rayHitList.Count - 1, hit.point);
                }
            }
        }
        else
            return;
    }

    public void ResetVisualizations()
    {
        lineRenderer.positionCount = 0;
        heatmap.ResetValues();
    }

    public void GetPath()
    {
        var hitList = new List<Vector3>();
        foreach (var hit in rayHitList)
            hitList.Add(hit.point);

        lineRenderer.positionCount = hitList.Count;
        lineRenderer.SetPositions(hitList.ToArray());
    }

    public void GetHeatmap()
    {
        foreach (var hit in rayHitList)
            heatmap.Calculate(hit);
    }

    private Vector3? GetPos(string ox, string oy, string oz)
    {
        bool isValidPos = false;
        Vector3 pos = TryParseStringToVector(ox, oy, oz, out isValidPos);

        return (isValidPos) ? pos : null;
    }

    private Quaternion? GetRot(string rotx, string roty, string rotz, string rotw)
    {
        bool isValidRot = false;
        Quaternion rot = TryParseStringToVector(rotx, roty, rotz, rotw, out isValidRot);

        return (isValidRot) ? rot : null;
    }


    private Ray? GetRay(string ox, string oy, string oz, string dirx, string diry, string dirz)
    {
        bool isValidOrigin = false, isValidDir = false;
        Vector3 origin = TryParseStringToVector(ox, oy, oz, out isValidOrigin);
        Vector3 dir = TryParseStringToVector(dirx, diry, dirz, out isValidDir);

        return (isValidOrigin && isValidDir) ? new Ray(origin, dir) : null;
    }

    private Ray? GetGazeRay(string currentLine)
    {
        string[] split = currentLine.Split(',');
        currentTrial = Int32.Parse(split[1]);

        return GetRay(split[2], split[3], split[4], split[5], split[6], split[7]);
    }

    private Vector3 TryParseStringToVector(string x, string y, string z, out bool isValid)
    {
        isValid = true;
        float tx, ty, tz;

        if (!float.TryParse(x, out tx))
            tx = float.NaN;
        if (!float.TryParse(y, out ty))
            ty = float.NaN;
        if (!float.TryParse(z, out tz))
            tz = float.NaN;

        if (tx == float.NaN || ty == float.NaN || tz == float.NaN)
            isValid = false;

        return new Vector3(tx, ty, tz);
    }

    private Quaternion TryParseStringToVector(string x, string y, string z, string w, out bool isValid)
    {
        isValid = true;
        float tx, ty, tz, tw;

        if (!float.TryParse(x, out tx))
            tx = float.NaN;
        if (!float.TryParse(y, out ty))
            ty = float.NaN;
        if (!float.TryParse(z, out tz))
            tz = float.NaN;
        if (!float.TryParse(w, out tw))
            tw = float.NaN;

        if (tx == float.NaN || ty == float.NaN || tz == float.NaN || tw == float.NaN)
            isValid = false;

        return new Quaternion(tx, ty, tz, tw);
    }

    public void SaveCameraView()
    {
        int width = 4096, height = 2160;
        Camera cam = GetComponent<Camera>();
        RenderTexture screenTexture = new RenderTexture(width, height, 16);
        cam.targetTexture = screenTexture;
        RenderTexture.active = screenTexture;
        cam.Render();
        Texture2D renderedTexture = new Texture2D(width, height);
        renderedTexture.ReadPixels(new Rect(0, 0, width, height), 0, 0);
        RenderTexture.active = null;
        byte[] byteArray = renderedTexture.EncodeToPNG();
        File.WriteAllBytes($"{Application.dataPath}/5.Screenshots/{userID}_{conditionID}__{System.DateTime.Now.ToString("dd_hh_mm")}.png", byteArray);
    }
}

#if UNITY_EDITOR
[CustomEditor(typeof(ReplayManager))]
public class ReplayManagerEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        ReplayManager myScript = (ReplayManager)target;
        if (GUILayout.Button("Load Session"))
            myScript.LoadSession();

        if (GUILayout.Button("Play"))
            myScript.Play();

        if (GUILayout.Button("Get Scanpath"))
            myScript.GetPath();

        if (GUILayout.Button("Get Heatmap"))
            myScript.GetHeatmap();

        if (GUILayout.Button("Reset Visualizations"))
            myScript.ResetVisualizations();

        if (GUILayout.Button("Save Screenshot"))
            myScript.SaveCameraView();
    }
}
#endif
