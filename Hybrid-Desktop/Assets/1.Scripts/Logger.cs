using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;

public class Logger
{
    //session info for log file
    private const string sessionFolderRoot = "LogFiles";
    private string sessionPath;
    private string fileName;
    private string logType;
    private string userID;
    private int conditionID;
    private int blockID;
    private string sessionID;
    private StreamWriter writer;
    private long startTime;
    private string fileHeader = "TimeStamp, Trial, pos.x, pos.y, pos.z, rot.x, rot.y, rot.z, rot.w, ";

    public Logger(string logType, string userID, int conditionID, int blockID, string sessionID, long startTime)
    {
        this.logType = logType;
        this.userID = userID;
        this.conditionID = conditionID;
        this.blockID = blockID;
        this.sessionID = sessionID;
        this.startTime = startTime;
        this.MakeNewSession();
    }

    private void MakeNewSession()
    {
        string rootPath = "";
        rootPath = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments), sessionFolderRoot);
        if (!Directory.Exists(rootPath)) Directory.CreateDirectory(rootPath);
        sessionPath = Path.Combine(rootPath, $"{userID}_desktop"); //  folder name
        Directory.CreateDirectory(sessionPath);
        StartNewLogFile();
    }

    private void StartNewLogFile()
    {
        fileName = $"{userID}_{conditionID}_{logType}_desktop.csv";
        fileName = Path.Combine(sessionPath, fileName);
        writer = new StreamWriter(fileName, true);
        writer.AutoFlush = true;

        writer.WriteLine($"{sessionID}, {userID}, {conditionID}, {blockID}, {startTime}");
        writer.WriteLine(fileHeader);
    }

    public void LogLine(string log)
    {
        writer.WriteLine(log);
    }

    private void OnDestroy()
    {
        if (writer != null)
            writer.Flush();
        writer.Close();
    }
}
