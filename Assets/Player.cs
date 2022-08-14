using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public static Player instance;

    public int clickDamage;
    private void Awake()
    {
        instance = this;
        LoadData();
    }
    private void SaveData()
    {
        PlayerPrefs.SetInt("clickDamage", clickDamage);
    }
    private void LoadData()
    {
        clickDamage = PlayerPrefs.GetInt("clickDamage", clickDamage);
    }
    private void OnApplicationQuit()
    {
        SaveData();
    }

}
