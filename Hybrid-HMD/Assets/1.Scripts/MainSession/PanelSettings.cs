using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PanelSettings : MonoBehaviour
{
    private const float defaultDist = 0.45f;
    private float yPos, zPos;
    public float declineAngle = 15f;
    public float textAngle = 0.5f;
    public phoneType currentPhone = phoneType.galaxy22;
    public enum phoneType { galaxy22, iphone14 }

    [SerializeField]
    private float xAngle, yAngle;
    [SerializeField]
    private float textSizeOnPhone;
    public GameObject TextCanvas { get; set; }
    private TextMeshProUGUI text => TextCanvas.GetComponentInChildren<TextMeshProUGUI>();


    private void Awake()
    {
        TextCanvas = transform.Find("TextCanvas").gameObject;
        InitialisePanelSettings();
    }

    private void InitialisePanelSettings()
    {
        SetPos();
        SetSize();
        SetTextSize();
    }

    public void UpdatePanelSettings(float dist)
    {
        float scaleFactor = dist / defaultDist;
        gameObject.transform.localScale = Vector3.one * scaleFactor;
        gameObject.transform.position = new Vector3(0, yPos * scaleFactor, zPos * scaleFactor);
    }


    private void SetSize()
    {
        (xAngle, yAngle) = (GetPhoneAngularSize(currentPhone).x, GetPhoneAngularSize(currentPhone).y);

        // convert to physical size
        Vector2 panelSize = new Vector2(Mathf.Tan(xAngle / 2 * Mathf.Deg2Rad) * defaultDist * 2, Mathf.Tan(yAngle / 2 * Mathf.Deg2Rad) * defaultDist * 2);

        var imagePanel = transform.Find("ImagePanel");
        SetPanelSize(imagePanel, panelSize);
        SetTextCanvasSize(panelSize);

        var answerPanel = transform.Find("AnswerInput");
        var lCover = answerPanel.Find("LCover");
        var rCover = answerPanel.Find("RCover");

        SetPanelSize(lCover, panelSize);
        SetPanelSize(rCover, panelSize);
    }

    private Vector2 GetPhoneAngularSize(phoneType phone)
    {
        float width = 0f;
        float height = 0f;

        switch (phone)
        {
            case phoneType.galaxy22:
                width = 0.0779f;
                height = 0.1633f;
                break;
            case phoneType.iphone14:
                width = 0.0715f;
                height = 0.1475f;
                break;
        }

        float distToPhone = 0.34f;

        // convert to angular size
        float x = Mathf.Atan(width / (2 * distToPhone)) * Mathf.Rad2Deg * 2;
        float y = Mathf.Atan(height / (2 * distToPhone)) * Mathf.Rad2Deg * 2;

        return new Vector2(x, y);
    }


    private void SetPos()
    {
        float rad = declineAngle * Mathf.Deg2Rad;
        yPos = Mathf.Sin(rad) * defaultDist * -1;
        zPos = Mathf.Cos(rad) * defaultDist;

        transform.position = new Vector3(0, yPos, zPos);
        transform.localScale = Vector3.one;

        // set orientation
        transform.rotation = Quaternion.Euler(declineAngle, 0, 0);
    }

    private void SetTextSize()
    {
        var textSize = Mathf.Tan(textAngle / 2 * Mathf.Deg2Rad) * defaultDist * 2;
        //meter to pt conversion
        textSize *= 2834.65f;
        text.fontSize = textSize;
        textSizeOnPhone = SetTextSizeOnPhone();
    }

    private float  SetTextSizeOnPhone() => Mathf.Tan(textAngle / 2 * Mathf.Deg2Rad) * 0.34f * 1000 * 2;

    private void SetPanelSize(Transform obj, Vector2 size)
    {
        obj.localScale = new Vector3(size.x, size.y, 1);
    }

    private void SetTextCanvasSize(Vector2 size)
    {
        TextCanvas.GetComponent<RectTransform>().sizeDelta = new Vector2(size.x, size.y) * 1 / 0.00046f;
        var textPanel = TextCanvas.transform.Find("TextPanel").gameObject;
        textPanel.transform.localScale = new Vector3(size.x * 1 / 0.00046f, size.y * 1 / 0.00046f, 1);
    }
}
