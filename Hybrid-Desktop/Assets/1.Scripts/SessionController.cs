using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEditor;

public class SessionController : MonoBehaviour
{
    [Header("Session Info")]
    public int userID;
    public int blockID;
    [SerializeField]
    private int trialID;
    [SerializeField]
    private Conditions conditionName;
    private int[,] conditionSet = new int[8, 8]
    {
        {1,2,8,3,7,4,6,5 },
        {2,3,1,4,8,5,7,6 },
        {3,4,2,5,1,6,8,7 },
        {4,5,3,6,2,7,1,8 },
        {5,6,4,7,3,8,2,1 },
        {6,7,5,8,4,1,3,2 },
        {7,8,6,1,5,2,4,3 },
        {8,1,7,2,6,3,5,4 }
    };
    private enum Conditions { Hmd045, Hmd1, Hmd2, Hmd5, Hybrid045, Hybrid1, Hybrid2, Hybrid5 }
    private bool isHybrid = false;

    [Header("Data Logging")]
    public SessionLogger logger;

    [Header("Network Properties")]
    public Transform trackedObjects;
    private PhotonView sessionPV;
    private PhotonView deltaPV;
    private GameObject phone;
    private TrackingManager trackingManager;
    [SerializeField]
    private bool isSessionInfoSent = false;

    private void Start()
    {
        sessionPV = PhotonView.Get(this);
        deltaPV = PhotonView.Get(trackedObjects.Find("Delta"));
        phone = trackedObjects.Find("Phone").gameObject;
        trackingManager = trackedObjects.GetComponent<TrackingManager>();
    }

    private void Update()
    {
        if (isHybrid)
            trackingManager.UpdateDeltaTransform();
    }

    public void StartSession()
    {
        if (!isSessionInfoSent)
        {
            int conditionID = conditionSet[(userID - 1) % 8, blockID - 1];
            conditionName = (Conditions)conditionID - 1;
            isHybrid = (conditionID > 4) ? true : false;

            if (AssignDevice(out Player hmd))
            {
                sessionPV.RPC("SendSessionInfo", hmd, userID, blockID, conditionID);
                isSessionInfoSent = true;
            }

            if (!isHybrid)
            {
                Destroy(deltaPV.gameObject);
                Destroy(phone);
            }
            else
                ChangePVOwnership();

            logger.StartLog("p" + userID, conditionID, blockID);
        }
    }

    private bool AssignDevice(out Player hmd)
    {
        bool val = false;
        hmd = PhotonNetwork.PlayerListOthers[0];
        foreach (var device in PhotonNetwork.PlayerListOthers)
        {
            if (device.NickName == "hmd")
            {
                hmd = device;
                val = true;
            }
        }
        return val;
    }

    private void ChangePVOwnership()
    {
        if (!deltaPV.IsMine)
            deltaPV.RequestOwnership();
    }

    [PunRPC]
    private void SyncLoggerInfo(bool isDoingTask, int trialNumber)
    {
        logger.IsLogging = isDoingTask;
        logger.TrialNumber = trialNumber;
        trialID = trialNumber;
    }

    [PunRPC]
    private void EndTaskOnDesktop()
    {
        Destroy(logger);
        Destroy(trackedObjects.gameObject);
        Destroy(gameObject);
    }
}

[CustomEditor(typeof(SessionController))]
public class SessionControllerEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        SessionController myScript = (SessionController)target;
        if (GUILayout.Button("Start Session"))
            myScript.StartSession();
    }
}

