using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class SaveManager : MonoBehaviour
{
    public static SaveManager instance;

    [SerializeField] private float saveRate;
    private float saveTime = 0f;

    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        LoadData();
    }
    private void Update()
    {
        AutoSave();
    }
    private void OnApplicationQuit()
    {
        SaveData();
    }
    private void AutoSave()
    {
        saveTime += Time.deltaTime;
        if (saveTime >= saveRate)
        {
            saveTime -= saveRate;
            SaveData();
        }
    }
    private void LoadData()
    {
        List<ISaveable> iSaveables = FindAllISaveable();
        foreach (ISaveable iSaveable in iSaveables)
        {
            iSaveable.LoadData();
        }
    }
    private void SaveData()
    {
        List<ISaveable> iSaveables = FindAllISaveable();
        foreach (ISaveable iSaveable in iSaveables)
        {
            iSaveable.SaveData();
        }
    }
    private List<ISaveable> FindAllISaveable()
    {
        IEnumerable<ISaveable> iSaveables = FindObjectsOfType<MonoBehaviour>(true).OfType<ISaveable>();
        List<ISaveable> listISaveable = new List<ISaveable>(iSaveables); 
        //Debug.Log(listISaveable);
        //Debug.Log(listISaveable.Count);
        return listISaveable;
    }
}
