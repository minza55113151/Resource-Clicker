using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour, ISaveable
{
    public static Player instance;

    public int clickDamage;
    private void Awake()
    {
        instance = this;
    }
    public void LoadData()
    {
        clickDamage = PlayerPrefs.GetInt("clickDamage", clickDamage);
    }
    public void SaveData()
    {
        PlayerPrefs.SetInt("clickDamage", clickDamage);
    }
}
