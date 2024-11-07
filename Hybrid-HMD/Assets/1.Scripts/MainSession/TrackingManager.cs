using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackingManager : MonoBehaviour
{
    private Transform delta;
    private Transform phone;
    private Transform cam;
    // Start is called before the first frame update
    void Start()
    {
        delta = transform.Find("Delta");
        phone = transform.Find("Offset");
        cam = Camera.main.transform;
    }

    // Update is called once per frame
    void Update()
    {
        phone.position = cam.position + delta.position;
        //phone.rotation = cam.rotation * delta.rotation;
        phone.rotation = delta.rotation;
    }
}
