using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using System.Threading.Tasks;
#if WINDOWS_UWP
using Windows.Storage;
#endif

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
    private string fileHeader
    {
        get
        {
            if (logType == "answer")
                return "TrialNumber, TrialStart, TrialEnd, TrialTime, Answer";
            else if (logType == "gaze")
                return "TimeStamp, Trial, GazeOrigin.x, GazeOrigin.y, GazeOrigin.z, GazeDir.x, GazeDir.y, GazeDir.z, AOI, HitCoord.x, HitCoord.y, #ofGazeSwitch, CalibratedStatus";
            else if (logType == "head")
                return "TimeStamp, Trial, HeadPos.x, HeadPos.y, HeadPos.z, HeadRot.x, HeadRot.y, HeadRot.z, HeadRot.w, ";
            else
                return "TimeStamp, Trial, PhonePos.x, PhonePos.y, PhonePos.z, PhoneRot.x, PhoneRot.y, PhoneRot.z, PhoneRot.w, ";
        }
    }


    public Logger(string logType, string userID, int conditionID, int blockID, string sessionID, long startTime)
    {
        this.logType = logType;
        this.userID = userID;
        this.conditionID = conditionID;
        this.blockID = blockID;
        this.sessionID = sessionID;
        this.startTime = startTime;
        Task.Run(() => this.MakeNewSession());
    }

    #region create new file in folder
    //public void MakeNewSession()
    async Task MakeNewSession()
    {
        string rootPath = "";
        sessionPath = Path.Combine(sessionFolderRoot, userID); //  folder name
#if WINDOWS_UWP
        StorageFolder sessionParentFolder = await KnownFolders.PicturesLibrary.CreateFolderAsync(sessionPath, CreationCollisionOption.OpenIfExists);
        sessionPath = sessionParentFolder.Path;
#else
        rootPath = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments), sessionFolderRoot);
        if (!Directory.Exists(rootPath)) Directory.CreateDirectory(rootPath);
        sessionPath = Path.Combine(rootPath, userID); //  folder name
        Directory.CreateDirectory(sessionPath);
#endif
        StartNewLogFile();
    }
    #endregion

    //create file
    private void StartNewLogFile()
    {
        fileName = $"{userID}_{conditionID}_{logType}.csv";
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
