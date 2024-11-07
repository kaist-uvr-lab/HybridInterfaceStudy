using UnityEngine;
using System.Collections;
using System.Linq;

public class HeatmapPixelsTime : MonoBehaviour
{
    public bool OpacityColor;
    public Gradient ColorGradient;
    [Range(1, 20)]
    public int radiusInfluence;
    private int rSquared;

    public enum Size
    {
        veryLow,
        low,
        medium,
        high,
        veryHigh
    }

    public Size TexResolution = Size.low;
    private float[,] pixel;
    private float maxPixel;

    private Vector2 pixelUV;
    public GameObject imgPanel, textPanel, phone;
    private Texture2D[] tex = new Texture2D[2];
    private int width, height;

    void Awake()
    {
        switch (TexResolution)
        {
            case Size.veryLow:
                width = 16;
                height = 16 * 2;
                break;
            case Size.low:
                width = 16 * 2;
                height = 16 * 4;
                break;
            case Size.medium:
                width = 16 * 4;
                height = 16 * 8;
                break;
            case Size.high:
                width = 16 * 8;
                height = 16 * 16;
                break;
            case Size.veryHigh:
                width = 16 * 16;
                height = 16 * 32;
                break;
        }

        tex[0] = new Texture2D(width, height);
        tex[1] = new Texture2D(width, height);

        imgPanel.GetComponent<MeshRenderer>().material.mainTexture = tex[0];
        textPanel.GetComponent<MeshRenderer>().material.mainTexture = tex[1];
        phone.GetComponent<MeshRenderer>().material.mainTexture = tex[1];

        pixel = new float[2, width * height];

        rSquared = radiusInfluence * radiusInfluence;
    }

    public void ResetValues()
    {
        maxPixel = 1f;
        for (int id = 0; id < 2; id++)
        {
            for (int i = 0; i < width * height; i++)
                pixel[id, i] = 0f;

            Draw(id);
        }
    }

    void Start()
    {
        ResetValues();
    }


    public void Draw(int id)
    {
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                int i = x + width * y;

                //take the highest value of the pixels
                if (pixel[id, i] > maxPixel)
                    maxPixel = pixel[id, i];

                Color colorUpdate;
                //put the value of pixel in alpha or in ramp, relative to maximum value of all reticule
                if (OpacityColor)
                    colorUpdate = new Color(0f, 1f, 0f, pixel[id, i] / maxPixel);
                else
                    colorUpdate = ColorGradient.Evaluate(pixel[id, i] / maxPixel);

                tex[id].SetPixel(x, y, colorUpdate);
            }
        }

        tex[id].Apply();
    }

    public void Calculate(RaycastHit hit)
    {
        var id = (hit.collider.gameObject == imgPanel) ? 0 : 1;

        Renderer rend = hit.transform.GetComponent<Renderer>();
        MeshCollider meshCollider = hit.collider as MeshCollider;

        if (rend == null || rend.sharedMaterial == null || rend.sharedMaterial.mainTexture == null || meshCollider == null)
            return;

        pixelUV = hit.textureCoord;

        pixelUV.x *= width;
        pixelUV.y *= height;

        //check position of pixel
        tex[id].GetPixel((int)pixelUV.x, (int)pixelUV.y);

        for (int u = (int)pixelUV.x - radiusInfluence; u <= (int)pixelUV.x + radiusInfluence; u++)
        {
            for (int v = (int)pixelUV.y - radiusInfluence; v <= (int)pixelUV.y + radiusInfluence; v++)
            {
                //define limits
                if (v >= 0 && v < height)
                {
                    var radius = (pixelUV.x - u) * (pixelUV.x - u) + (pixelUV.y - v) * (pixelUV.y - v);
                    //create circle
                    if (radius < rSquared)
                    {
                        //edit the value of the pixel, adding deltatime and making a gradient from the center
                        int PixCurrent = u + width * v;
                        if (PixCurrent > 0  && PixCurrent < width * height)
                            pixel[id, PixCurrent] += 1f - radius / radiusInfluence * 0.01f;
                    }
                }
            }
        }

        Draw(id);
    }

}