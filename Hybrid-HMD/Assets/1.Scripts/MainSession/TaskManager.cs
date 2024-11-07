using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;
using Photon.Realtime;
using System;

public class TaskManager : MonoBehaviour
{
    //trial info
    private const int reps = 3;
    private int trialNumber = 0;
    private long startTime;
    private long endTime;
    private int answer;
    private bool isHMD;

    //gameobjects
    private GameObject imagePanel;
    private GameObject textPanel;
    private TextMeshProUGUI textHolder;
    private GameObject answerPanels;
    private TextMeshPro answerTextHolder;
    private Renderer _renderer;
    private PhotonView pv;
    public GameObject phone;
    public bool isSessionCreated { get; private set; }
    private bool isDoingTask = false;
    private bool isAnswered = false;

    private ConditionManager conditionManager;
    private StimuliManager stimuliManager;
    private Session session;
    public SessionLogger logger;

    public NetworkManager networkManager;
    private Player smartphone, desktop;

    void Start()
    {
        conditionManager = GetComponent<ConditionManager>();

        var panels = conditionManager.panels;
        imagePanel = panels.transform.Find("ImagePanel").gameObject;
        _renderer = imagePanel.GetComponent<Renderer>();
        textPanel = panels.transform.Find("TextCanvas").gameObject;
        textHolder = textPanel.GetComponentInChildren<TextMeshProUGUI>();
        answerPanels = panels.transform.Find("AnswerInput").gameObject;
        answerTextHolder = answerPanels.GetComponentInChildren<TextMeshPro>();

        stimuliManager = GetComponent<StimuliManager>();

        pv = PhotonView.Get(this);
        isSessionCreated = false;
    }

    void Update()
    {
        if (!isSessionCreated)
        {
            if (stimuliManager.IsDownloaded)
            {
                if (isHMD || IsConnectedToPhone())
                {
                    isSessionCreated = true;
                    answerTextHolder.text = "<size=20> ENTER 키를 눌러 과제를 시작하세요. ";
                    AssignDevicesToPlayers();
                }
            }
        }

        else
        {
            if (Input.GetKeyDown(KeyCode.KeypadEnter))
            {
                if (!isDoingTask && trialNumber > 0 && !isAnswered)
                    return;

                else
                {
                    isDoingTask = !isDoingTask;
                    logger.IsLogging = isDoingTask;

                    if (isDoingTask)
                        StartTrial();
                    else
                        EndTrial();

                    pv.RPC("SyncLoggerInfo", desktop, isDoingTask, trialNumber); // sync session info on desktop
                }
            }

            if (!isDoingTask)
            {
                if (Input.anyKeyDown)
                {
                    if (Int32.TryParse(Input.inputString, out int i))
                        InputAnswer(i);
                }       
            }
        }
    }

    [PunRPC]
    private void SendSessionInfo(int userID, int blockID, int conditionID)
    {
        session = new Session(userID, blockID, conditionID);
        StartNewSession();
    }

    public void StartNewSession()
    {
        isHMD = (session.ConditionID <= 4) ? true : false;
        DownloadStimuli();
        InitialiseCondition();
        StartLogging();
    }

    private void DownloadStimuli() => StartCoroutine(stimuliManager.GetSheetData(session.BlockID));
    private void InitialiseCondition() => conditionManager.SwitchCondition(session.ConditionID);
    private bool IsConnectedToPhone() => networkManager.CheckConnectionToPhone();
    private void StartLogging() => logger.StartLog(session.UserID, session.ConditionID, session.BlockID);
    private void StartTrial()
    {
        if (trialNumber > 0)
            logger.LogAnswer(startTime, endTime, answer);

        startTime = DateTimeOffset.Now.ToUnixTimeMilliseconds();
        answerPanels.SetActive(false);
        isAnswered = false;

        if (trialNumber < reps)
        {
            SetImage();
            SetText();
        }
        else
            EndTask();

        trialNumber++;
        logger.TrialNumber = trialNumber;
    }

    private void EndTrial()
    {
        endTime = DateTimeOffset.Now.ToUnixTimeMilliseconds();
        answerPanels.SetActive(true);
        answerTextHolder.text = "";

        if (isHMD)
            textHolder.text = "";
        else
            pv.RPC("ShowTextOnPhone", smartphone, "");
    }

    private void InputAnswer(int i)
    {
        answerTextHolder.text = i.ToString();
        answer = i;
        isAnswered = true;
    }

    private void SetImage() => _renderer.material.mainTexture = stimuliManager.Textures[trialNumber];

    private void SetText()
    {
        var text = stimuliManager.TextList[trialNumber];
        if (isHMD)
            textHolder.text = text;
        else
            pv.RPC("ShowTextOnPhone", smartphone, text);
    }

    private void EndTask()
    {
        Destroy(conditionManager.panels);
        Destroy(gameObject);
        Destroy(logger);

        pv.RPC("EndTaskOnDesktop", desktop);
    }

    private void AssignDevicesToPlayers()
    {
        foreach (var device in PhotonNetwork.PlayerListOthers)
        {
            if (device.NickName == "smartphone")
                smartphone = device;

            if (device.NickName == "desktop")
                desktop = device;
        }
    }
}
