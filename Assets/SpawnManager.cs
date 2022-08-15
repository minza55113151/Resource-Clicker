using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour, ISaveable
{
    public static SpawnManager instance;

    [SerializeField] private int maxResource;
    [SerializeField] private GameObject[] resourcePrefabs;
    [Header("Rate")]
    [SerializeField] public float spawnRate;
    [SerializeField] private float bigRate;
    [SerializeField] private float woodRate;
    [SerializeField] private float stoneRate;
    [SerializeField] private float ironRate;
    [SerializeField] private float goldRate;
    [SerializeField] private float shardRate;
    [Header("IsUnlock")]
    public bool isUnlockWood = true;
    public bool isUnlockStone;
    public bool isUnlockIron;
    public bool isUnlockGold;
    public bool isUnlockShard;
    public int unlockCount = 1;

    private float spawnTime = 0f;

    private bool isSpawning = true;
    
    private void Awake()
    {
        instance = this;
    }

    public void LoadData()
    {
        spawnRate = PlayerPrefs.GetFloat("spawnRate", 5f);
        unlockCount = PlayerPrefs.GetInt("unlockCount", 1);
        isUnlockWood = PlayerPrefs.GetInt("isUnlockWood", 1) != 0;
        isUnlockStone = PlayerPrefs.GetInt("isUnlockStone", 0) != 0;
        isUnlockIron = PlayerPrefs.GetInt("isUnlockIron", 0) != 0;
        isUnlockGold = PlayerPrefs.GetInt("isUnlockGold", 0) != 0;
        isUnlockShard = PlayerPrefs.GetInt("isUnlockShard", 0) != 0;

    }
    public void SaveData()
    {
        PlayerPrefs.SetFloat("spawnRate", spawnRate);
        PlayerPrefs.SetInt("unlockCount", unlockCount);
        PlayerPrefs.SetInt("isUnlockWood", isUnlockWood? 1 : 0);
        PlayerPrefs.SetInt("isUnlockStone", isUnlockStone ? 1 : 0);
        PlayerPrefs.SetInt("isUnlockIron", isUnlockIron ? 1 : 0);
        PlayerPrefs.SetInt("isUnlockGold", isUnlockGold ? 1 : 0);
        PlayerPrefs.SetInt("isUnlockShard", isUnlockShard ? 1 : 0);
    }
    private void Update()
    {
        SpawnRandomResource();
    }
    
    private GameObject SpawnRandomResource()
    {
        if (isSpawning == false)
            return null;
        //spawn loop
        spawnTime += Time.deltaTime;
        if (spawnTime < spawnRate)
            return null;
        spawnTime -= spawnRate;
        
        //if max resource
        if (GameObject.FindGameObjectsWithTag("Resource").Length >= maxResource)
            return null;
        
        //random and spawn
        GameObject prefab = RandomResource();
        GameObject resource = SpawnResource(prefab);
        return resource;
    }

    private GameObject RandomResource()
    {
        float rand = Random.Range(0f, 1f);
        if (rand < shardRate && isUnlockShard)
        {
            return resourcePrefabs[6];
        }
        else if (rand < goldRate && isUnlockGold)
        {
            return resourcePrefabs[5];
        }
        else if (rand < ironRate && isUnlockIron)
        {
            return resourcePrefabs[4];
        }
        else if (rand < stoneRate && isUnlockStone)
        {
            return resourcePrefabs[3];
        }
        //wood
        else
        {
            return resourcePrefabs[Random.Range(0,3)];
        }
    }
    
    private GameObject SpawnResource(GameObject resourcePrefab)
    {
        //Transform transform = resourcePrefab.GetComponent<Transform>();
        Vector3 spawnPos = new Vector2(Random.Range(-3f, 3f), Random.Range(-3f, 3f));
        GameObject resource = Instantiate(resourcePrefab, spawnPos, Quaternion.identity);
        if (Random.Range(0f,1f) < bigRate)
        {
            resource.GetComponent<ResourceObject>().SetBig();
        }
        return resource;
    }

    public bool ToggleSpawning()
    {
        isSpawning = !isSpawning;
        return isSpawning;
    }

    public int UnlockResource()
    {
        unlockCount++;
        switch (unlockCount)
        {
            case 2:
                isUnlockStone = true;
                break;
            case 3:
                isUnlockIron = true;
                break;
            case 4:
                isUnlockGold = true;
                break;
            case 5:
                isUnlockShard = true;
                break;
        }
        return unlockCount;
    }
}
