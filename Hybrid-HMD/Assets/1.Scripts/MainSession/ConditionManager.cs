using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConditionManager : MonoBehaviour
{
    public GameObject panels;
    private PanelSettings panelSettings;
    public GameObject trackedObjects;

    private void Awake()
    {
        panelSettings = panels.GetComponent<PanelSettings>();
    }

    public void SwitchCondition(int conditionID)
    {
        float dist = 0f;
        switch (conditionID % 4)
        {
            case 1:
                dist = 0.45f;
                break;
            case 2:
                dist = 1f;
                break;
            case 3:
                dist = 2f;
                break;
            case 0:
                dist = 5f;
                break;
        }
        bool isHMD = (conditionID <= 4) ? true : false;

        panelSettings.TextCanvas.SetActive(isHMD);
        panelSettings.UpdatePanelSettings(dist);

        if (isHMD)
            Destroy(trackedObjects);
    }
}
