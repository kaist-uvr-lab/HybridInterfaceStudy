using SimpleJSON;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class StimuliManager : MonoBehaviour
{
    //google sheets info
    private const string sheetID = "1wxlpWjZR8X1VlG5q-NRDfMmmSDfrZOguXah5CWfnITk";
    private const string sheetName = "finalSet";
    private const string sheetKey = "AIzaSyBl3m0-3xrWJ2yICMPnk8TU2G01ZkT2ZYk";
    private string sheetURL = $"https://sheets.googleapis.com/v4/spreadsheets/{sheetID}/values/{sheetName}/?key={sheetKey}";
    private const string driveKey = "AIzaSyCZWHHsxClqix5wWqzTaJ9niwsohRfvvBE";
    private string ImgURL(string id) => $"https://www.googleapis.com/drive/v3/files/{id}?alt=media&key={driveKey}";
    
    private bool isDownloaded = false;
    public bool IsDownloaded => isDownloaded;

    [Header("Image Stimuli")]
    [SerializeField]
    private List<Texture2D> textures = new List<Texture2D>();
    public List<Texture2D> Textures => textures;

    [Header("Text Stimuli")]
    [TextArea, SerializeField]
    private List<string> textList = new List<string>();
    public List<string> TextList => textList;

    public IEnumerator GetSheetData(int blockID)
    {
        var stimuliID = (blockID - 1) * 3;

        UnityWebRequest www = UnityWebRequest.Get(sheetURL);
        yield return www.SendWebRequest();

        if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            Debug.Log("ERROR:" + www.error);
        else
        {
            string json = www.downloadHandler.text;
            var obj = JSON.Parse(json);

            for (int i = 1 + stimuliID; i < 4 + stimuliID; i++)
            {
                var row = JSON.Parse(obj["values"][i].ToString());
                yield return StartCoroutine(GetImage(row[1]));
                textList.Add(row[2]);
            }
        }

        isDownloaded = true;
    }


    IEnumerator GetImage(string id)
    {
        UnityWebRequest www = UnityWebRequestTexture.GetTexture(ImgURL(id));
        www.SetRequestHeader("Authorization", driveKey);
        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
            Debug.Log(www.error);
        else
            textures.Add(DownloadHandlerTexture.GetContent(www));
    }
}
