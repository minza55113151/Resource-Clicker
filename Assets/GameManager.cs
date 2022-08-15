using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public bool clearSave;
    public bool isDebug;

    private void Awake()
    {
        instance = this;
        if (clearSave)
        {
            PlayerPrefs.DeleteAll();
        }
    }
    private void Start()
    {
        if (isDebug)
        {
            //debug zone
            ResourceManager.instance.AddResource(0, 1000000);
            ResourceManager.instance.AddResource(1, 1000000);
            ResourceManager.instance.AddResource(2, 1000000);
            ResourceManager.instance.AddResource(3, 1000000);
            ResourceManager.instance.AddResource(4, 1000000);
            ResourceManager.instance.AddResource(5, 1000000);
        }
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }
    private void OnApplicationQuit()
    {
        if (clearSave)
        {
            PlayerPrefs.DeleteAll();
        }
    }
}
