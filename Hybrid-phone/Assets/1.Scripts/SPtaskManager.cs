using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;

public class SPtaskManager : MonoBehaviour
{
    public TextMeshProUGUI textComponent;
    
    [PunRPC]
    void ShowTextOnPhone(string str)
    {
        textComponent.text = str;
    }
}
