using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorkerManager : MonoBehaviour
{
    public static WorkerManager instance;

    public WorkerScriptableObject workerInfo;

    [SerializeField] private GameObject workerPrefab;

    private int workerCount;
    
    private void Awake()
    {
        instance = this;
        LoadData();

    }
    private void Start()
    {
        for (int i = 0; i < workerCount; i++)
        {
            Vector2 spawnPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
            Instantiate(workerPrefab, spawnPos, Quaternion.identity);
        }
    }
    private void LoadData()
    {
        workerCount = PlayerPrefs.GetInt("workerCount", 0);
    }
    private void SaveData()
    {
        PlayerPrefs.SetInt("workerCount", workerCount);
    }
    private void OnApplicationQuit()
    {
        SaveData();
    }

    public GameObject SpawnWorker()
    {
        Vector2 spawnPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
        workerCount++;
        return Instantiate(workerPrefab, spawnPos, Quaternion.identity);
    }

}
