using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorkerManager : MonoBehaviour, ISaveable
{
    public static WorkerManager instance;

    [SerializeField] private GameObject workerPrefab;

    private int workerCount;
    
    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        for (int i = 0; i < workerCount; i++)
        {
            Vector2 spawnPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
            Instantiate(workerPrefab, spawnPos, Quaternion.identity);
        }
    }
    public void LoadData()
    {
        workerCount = PlayerPrefs.GetInt("workerCount", 0);
    }
    public void SaveData()
    {
        PlayerPrefs.SetInt("workerCount", workerCount);
    }
    public GameObject SpawnWorker()
    {
        Vector2 spawnPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
        workerCount++;
        return Instantiate(workerPrefab, spawnPos, Quaternion.identity);
    }

}
