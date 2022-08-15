using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public bool clearSave;

    private void Awake()
    {
        instance = this;
        if (clearSave)
        {
            PlayerPrefs.DeleteAll();
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
