using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using MixedReality.Toolkit.Input;

public class SessionLogger : MonoBehaviour
{
    public GazeInteractor gazeInteractor;
    private Logger answerLog;
    private Logger gazeLog;
    private Logger headLog;
    private Logger phoneLog;
    private bool isHybrid;
    private Transform cam;
    public Transform phone;
    private long startTime;
    private long timeStamp;
    public int TrialNumber { get; set; }
    public bool IsLogging { get; set; }
    //private bool isGazeValid { get; set; }

    private int lastTrialNumber = 0;
    private GameObject lastGazedObject;
    private int gazeSwitchCount = 0;
    public EyeCalibrationChecker eyeCablibrationChecker;


    private void Awake()
    {
        Application.targetFrameRate = 60;
    }

    private void Start()
    {
        cam = Camera.main.transform;
    }
    private void FixedUpdate()
    {
        if (IsLogging)
        {
            timeStamp = DateTime.Now.Ticks / TimeSpan.TicksPerMillisecond - startTime;
            LogGaze();
            LogHead();

            if (isHybrid)
                LogPhone();
        }
    }

    public void StartLog(string userID, int conditionID, int blockID)
    {
        var sessionID = DateTime.Now.ToString("MMdd_HH:mm:ss");
        startTime = DateTime.Now.Ticks / TimeSpan.TicksPerMillisecond;
        TrialNumber = 0;
        isHybrid = (conditionID > 4) ? true : false;

        answerLog = new Logger("answer", userID, conditionID, blockID, sessionID, startTime);
        gazeLog = new Logger("gaze", userID, conditionID, blockID, sessionID, startTime);
        headLog = new Logger("head", userID, conditionID, blockID, sessionID, startTime);

        if (isHybrid)
            phoneLog = new Logger("phone", userID, conditionID, blockID, sessionID, startTime);
    }

    public void LogAnswer(long start, long end, int answer)
    {
        var trialTime = end - start;
        string log = $"{TrialNumber}, {start}, {end}, {trialTime}, {answer}";

        answerLog.LogLine(log);
    }

    private void LogGaze()
    {
        Vector3 origin = gazeInteractor.rayOriginTransform.position;
        Vector3 dir = gazeInteractor.rayOriginTransform.forward;
        var ray = new Ray(origin, dir);
        string AoI = GazeHitAoI(ray, out var hitPoint);
        string gazeTransform = $"{origin.x}, {origin.y}, {origin.z}, {dir.x}, {dir.y}, {dir.z}";
        string log = $"{timeStamp}, {TrialNumber}, {gazeTransform}, {AoI}, {hitPoint.x}, {hitPoint.y}, {gazeSwitchCount}, {eyeCablibrationChecker.CalibratedStatus}";
        Debug.Log($"{AoI}: {hitPoint.x}, {hitPoint.y}"); // {hitPoint.x * 0.103103f}, {hitPoint.y * 0.215735}

        gazeLog.LogLine(log);
    }

    private String GazeHitAoI(Ray ray, out Vector2 hitPoint)
    {
        string AoI;
        hitPoint = Vector2.zero;

        if (TrialNumber != lastTrialNumber)
        {
            gazeSwitchCount = 0;
            lastGazedObject = null;
            lastTrialNumber = TrialNumber;
        }

        if (Physics.Raycast(ray, out var hit))
        {
            var hitObject = hit.collider.gameObject;
            AoI = hitObject.name;
            hitPoint = hit.textureCoord;
            // Debug.DrawRay(ray.origin, hit.point, Color.green);

            if (hitObject != lastGazedObject)
                gazeSwitchCount++;

            lastGazedObject = hit.collider.gameObject;
        }
        else
            AoI = "NULL";

        return AoI;
    }

    private void LogHead() => headLog.LogLine(GetTransform(cam));
    private void LogPhone() => phoneLog.LogLine(GetTransform(phone));
    public string GetTransform(Transform t)
    {
        Vector3 pos = t.position;
        Quaternion rot = t.rotation;

        string transform = $"{pos.x}, {pos.y}, {pos.z}, {rot.x}, {rot.y}, {rot.z}, {rot.w}";
        string log = $"{timeStamp}, {TrialNumber}, {transform}";

        return log;
    }
}
