using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorkerInfo : MonoBehaviour, ISaveable
{
    public static WorkerInfo instance;

    public float walkSpeed;
    public int harvestDamage;
    public float harvestSpeed;
    public float harvestRadius;

    private void Awake()
    {
        instance = this;
    }
    public void LoadData()
    {
        walkSpeed = PlayerPrefs.GetFloat("walkSpeed", walkSpeed);
        harvestDamage = PlayerPrefs.GetInt("harvestDamage", harvestDamage);
        harvestSpeed = PlayerPrefs.GetFloat("harvestSpeed", harvestSpeed);
        harvestRadius = PlayerPrefs.GetFloat("harvestRadius", harvestRadius);
    }
    public void SaveData()
    {
        PlayerPrefs.SetFloat("walkSpeed", walkSpeed);
        PlayerPrefs.SetInt("harvestDamage", harvestDamage);
        PlayerPrefs.SetFloat("harvestSpeed", harvestSpeed);
        PlayerPrefs.SetFloat("harvestRadius", harvestRadius);
    }
}
