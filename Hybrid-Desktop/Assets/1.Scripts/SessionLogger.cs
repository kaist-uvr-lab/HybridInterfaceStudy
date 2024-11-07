using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SessionLogger : MonoBehaviour
{
    private Logger headLog;
    private Logger phoneLog;
    private Logger deltaLog;
    private bool isHybrid;
    public Transform trackedObjects;
    private Transform HMD;
    private Transform phone;
    private Transform delta;
    private long startTime;
    private long timeStamp;
    public int TrialNumber { get; set; }
    public bool IsLogging { get; set; }

    private void Start()
    {
        Application.targetFrameRate = 60;

        var trackingManager = trackedObjects.GetComponent<TrackingManager>();
        HMD = trackingManager.HMD;
        phone = trackingManager.phone;
        delta = trackingManager.delta;
        
    }

    private void FixedUpdate()
    {
        if (IsLogging)
        {
            timeStamp = DateTime.UtcNow.Ticks / TimeSpan.TicksPerMillisecond - startTime;
            LogHead();

            if (isHybrid)
            {
                LogPhone();
                LogDelta();
            }  
        }
    }

    public void StartLog(string userID, int conditionID, int blockID)
    {
        var sessionID = DateTime.Now.ToString("MMdd_HH:mm:ss");
        startTime = DateTime.UtcNow.Ticks / TimeSpan.TicksPerMillisecond;
        TrialNumber = 0;
        isHybrid = (conditionID > 4) ? true : false;

        headLog = new Logger("head", userID, conditionID, blockID, sessionID, startTime);

        if (isHybrid)
        {
            phoneLog = new Logger("phone", userID, conditionID, blockID, sessionID, startTime);
            deltaLog = new Logger("delta", userID, conditionID, blockID, sessionID, startTime);
        }    
    }


    private void LogHead() => headLog.LogLine(GetTransform(HMD));
    private void LogPhone() => phoneLog.LogLine(GetTransform(phone));
    private void LogDelta() => phoneLog.LogLine(GetTransform(delta));
    public string GetTransform(Transform t)
    {
        Vector3 pos = t.position;
        Quaternion rot = t.rotation;

        string transform = $"{pos.x}, {pos.y}, {pos.z}, {rot.x}, {rot.y}, {rot.z}, {rot.w}";
        string log = $"{timeStamp}, {TrialNumber}, {transform}";

        return log;
    }
}
