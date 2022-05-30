using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class matrices : MonoBehaviour
{
    public float camSpeed;

    float CameraXPos;
    float CameraYPos;

    private void OnGUI()
    {
        matrice square = new matrice();
        matrice player = new matrice();
        
        //Grass
        //y-as
        for (int y = 0; y < 20; y++)
        {
            //x-as
            for (int x = 0; x < 20; x++)
            {
                square.Render((x * 100) + CameraXPos, (y * 100) + CameraYPos, 1, 0, Color.green);
            }
        }

        player.Render(930, 540, 1, 0, Color.black);

        //CamMovement
        if (Input.GetKey("w"))
        {
            CameraYPos += camSpeed * Time.deltaTime;
        }

        if (Input.GetKey("s"))
        {
            CameraYPos -= camSpeed * Time.deltaTime;
        }

        if (Input.GetKey("a"))
        {
            CameraXPos += camSpeed * Time.deltaTime;
        }

        if (Input.GetKey("d"))
        {
            CameraXPos -= camSpeed * Time.deltaTime;
        }
    }
}

public class matrice
{
    public Texture2D pixel;

    public float xPos;
    public float yPos;
    public float objectRotation;
    public float objectScale;

    public bool textureCreated;

    public void AddTexture(Color _color)
    {
        //Make White pixel
        pixel = new Texture2D(100, 100, TextureFormat.RGBA32, false);
        for (int x = 0; x <= 100; x++)
        {
            for (int y = 0; y <= 100; y++)
            {
                pixel.SetPixel(x, y, _color);
            }
        }
        pixel.Apply();
        textureCreated = true;
    }

    public void Render(float _xPos, float _yPos, float _objectScale, float _objectRotation, Color color)
    {
        if (textureCreated == false)
        {
            AddTexture(color);
        }

        //Matrices
        Matrix4x4 translation = Matrix4x4.Translate(new Vector3(_xPos, _yPos, 0));
        Matrix4x4 scale = Matrix4x4.Scale(new Vector3(_objectScale, _objectScale, 1));
        Matrix4x4 rotation = Matrix4x4.Rotate(Quaternion.Euler(0, 0, _objectRotation));

        Matrix4x4 pivot = Matrix4x4.Translate(new Vector3(((_xPos / 2) * -1), ((_yPos / 2) * -1), 0));

        GUI.matrix = pivot.inverse * translation * rotation * scale * pivot;

        //Draw Texture
        GUI.DrawTexture(new Rect(0, 0, pixel.width, pixel.height), pixel);
    }
}