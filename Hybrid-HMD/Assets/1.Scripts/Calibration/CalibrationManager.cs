using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrationManager : MonoBehaviour
{
    // Start is called before the first frame update
    async void Start()
    {
        LaunchEyeTracking();

        //Uri uri = new Uri(@"ms-settings:privacy-eyetracker");
        //var success = await Windows.System.Launcher.LaunchUriAsync(uri);
    }

    public void LaunchEyeTracking()
    {
#if WINDOWS_UWP
        UnityEngine.WSA.Application.InvokeOnUIThread(async () =>
    {
        bool result = await global::Windows.System.Launcher.LaunchUriAsync(new System.Uri("ms-hololenssetup://EyeTracking"));
        if (!result)
        {
            Debug.LogError("Launching URI failed to launch.");
        }
    }, false);
#endif
    }
}
