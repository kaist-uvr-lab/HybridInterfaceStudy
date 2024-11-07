using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TextInfoLogger : MonoBehaviour
{
    public TextMeshProUGUI text;

    [SerializeField]
    private int charPerLine, charCount, wordCount, lineCount;
    // Start is called before the first frame update
    void Start()
    {
        
        
    }

    // Update is called once per frame
    void Update()
    {
        charPerLine = text.textInfo.lineInfo[0].characterCount;
        charCount = text.textInfo.characterCount;
        wordCount = text.textInfo.wordCount;
        lineCount = text.textInfo.lineCount;

    }
}
