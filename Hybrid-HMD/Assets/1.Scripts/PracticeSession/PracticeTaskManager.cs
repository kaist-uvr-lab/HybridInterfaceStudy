using Photon.Pun;
using System;
using TMPro;
using UnityEngine;

public class PracticeTaskManager : MonoBehaviour
{
    [Header("Session Info")]
    [SerializeField]
    private bool HMDFirst;
    private const int reps = 2;
    private int trialNumber = 0;
    private int answer;
    private bool isHMD;
    private State currentState = State.waiting;
    private enum State { waiting, doingTask, answering }

    [Header("SceneObjects")]
    public GameObject panels;
    private GameObject imagePanel;
    private GameObject textPanel;
    private TextMeshProUGUI textHolder;
    private GameObject answerPanels;
    private TextMeshPro answerTextHolder;
    private Renderer _renderer;
    private PhotonView pv;

    [Header("Stimuli")]
    [TextArea]
    [SerializeField]
    private string[] textList = new string[reps];
    [SerializeField]
    private Texture[] textures = new Texture[reps];

    private bool isAnswered = false;
    private bool isReadyToStart = false;

    public NetworkManager networkManager;

    void Start()
    {
        imagePanel = panels.transform.Find("ImagePanel").gameObject;
        _renderer = imagePanel.GetComponent<Renderer>();
        textPanel = panels.transform.Find("TextCanvas").gameObject;
        textHolder = textPanel.GetComponentInChildren<TextMeshProUGUI>();
        answerPanels = panels.transform.Find("AnswerInput").gameObject;
        answerTextHolder = answerPanels.GetComponentInChildren<TextMeshPro>();

        pv = PhotonView.Get(this);

        StartNewSession();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.KeypadEnter))
        {
            if ((currentState == State.waiting && !isReadyToStart) || (currentState == State.answering && !isAnswered))
                return;

            else
            {
                currentState = (State)(((int)currentState + 1) % 3);
                switch (currentState)
                {
                    case State.waiting:
                        isHMD = !isHMD;
                        ResetText();
                        if (trialNumber >= reps)
                            EndTask();
                        else
                            SwitchCondition();
                        break;
                    case State.doingTask:
                        StartTrial();
                        break;
                    case State.answering:
                        EndTrial();
                        break;
                }
            }
        }

        else if (currentState == State.waiting)
        {
            LaunchStartScreen();
        }

        else if (currentState == State.answering)
        {
            if (Input.anyKeyDown)
            {
                if (Int32.TryParse(Input.inputString, out int i))
                    InputAnswer(i);
            }
        }
    }


    public void StartNewSession()
    {
        isHMD = HMDFirst;
        SwitchCondition();
        LaunchStartScreen();
    }

    private void LaunchStartScreen()
    {
        if (isHMD || IsConnectedToPhone())
        {
            answerTextHolder.text = "<size=20> ENTER 키를 눌러 <br> 태스크를 시작하세요. ";
            isReadyToStart = true;
        }
            
    }
    private void SwitchCondition()
    {
        var panelSettings = panels.GetComponent<PanelSettings>();
        panelSettings.TextCanvas.SetActive(isHMD);
        panelSettings.UpdatePanelSettings(1.5f);
    }
    private bool IsConnectedToPhone() => networkManager.CheckConnectionToPhone();
    private void StartTrial()
    {
        answerPanels.SetActive(false);
        isAnswered = false;

        SetImage();
        SetText(textList[trialNumber]);

        trialNumber++;
    }

    private void EndTrial()
    {
        answerPanels.SetActive(true);
        ResetText();
        isReadyToStart = false;
    }

    private void ResetText()
    {
        answerTextHolder.text = "";
        SetText("");
    }

    private void InputAnswer(int i)
    {
        answerTextHolder.text = i.ToString();
        answer = i;
        isAnswered = true;
    }

    private void SetImage() => _renderer.material.mainTexture = textures[trialNumber];

    private void SetText(string text)
    {
        if (isHMD)
            textHolder.text = text;
        else
            pv.RPC("ShowTextOnPhone", RpcTarget.Others, text);
    }

    private void EndTask()
    {
        Destroy(panels);
        Destroy(gameObject);
    }
}
    