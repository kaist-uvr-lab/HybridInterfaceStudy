using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TrackingManager : MonoBehaviour
{
    public Transform delta { get; private set; }
    public Transform HMD { get; private set; }
    public Transform phone { get; private set; }

    // Start is called before the first frame update
    void Awake()
    {
        delta = transform.Find("Delta");
        HMD = transform.Find("HMD");
        phone = transform.Find("Phone");
    }

    public void UpdateDeltaTransform()
    {
        delta.position = phone.position - HMD.position;
        //delta.rotation = phone.rotation * Quaternion.Inverse(HMD.rotation);
        delta.rotation = phone.rotation;
    }
}
