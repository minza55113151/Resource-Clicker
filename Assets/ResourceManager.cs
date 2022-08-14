using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourceManager : MonoBehaviour
{
    public static ResourceManager instance;

    public int money;
    public int wood;
    public int stone;
    public int iron;
    public int gold;
    public int shard;

    private void Awake()
    {
        instance = this;
        LoadData();
    }
    private void Start()
    {
        UIManager.instance.SetAmountResource(0, money);
        UIManager.instance.SetAmountResource(1, wood);
        UIManager.instance.SetAmountResource(2, stone);
        UIManager.instance.SetAmountResource(3, iron);
        UIManager.instance.SetAmountResource(4, gold);
        UIManager.instance.SetAmountResource(5, shard);
    }

    private void LoadData()
    {
        money = PlayerPrefs.GetInt("money", 0);
        wood = PlayerPrefs.GetInt("wood", 0);
        stone = PlayerPrefs.GetInt("stone", 0);
        iron = PlayerPrefs.GetInt("iron", 0);
        gold = PlayerPrefs.GetInt("gold", 0);
        shard = PlayerPrefs.GetInt("shard", 0);
        
        
    }
    private void SaveData()
    {
        PlayerPrefs.SetInt("money", money);
        PlayerPrefs.SetInt("wood", wood);
        PlayerPrefs.SetInt("stone", stone);
        PlayerPrefs.SetInt("iron", iron);
        PlayerPrefs.SetInt("gold", gold);
        PlayerPrefs.SetInt("shard", shard);
    }
    private void OnApplicationQuit()
    {
        SaveData();
    }


    public void AddResource(int tier, int amount)
    {
        switch (tier)
        {
            case 0:
                money += amount;
                UIManager.instance.SetAmountResource(tier, money);
                break;
            case 1:
                wood += amount;
                UIManager.instance.SetAmountResource(tier, wood);
                break;
            case 2:
                stone += amount;
                UIManager.instance.SetAmountResource(tier, stone);
                break;
            case 3:
                iron += amount;
                UIManager.instance.SetAmountResource(tier, iron);
                break;
            case 4:
                gold += amount;
                UIManager.instance.SetAmountResource(tier, gold);
                break;
            case 5:
                shard += amount;
                UIManager.instance.SetAmountResource(tier, shard);
                break;
        }
    }
    public void AddResource(ResourceObject resource)
    {
        int amount = Random.Range(1,4);
        if (resource.isBig)
        {
            amount *= 10;
        }
        AddResource(resource.tier, amount);
    }

    public void RemoveResource(int tier, int amount)
    {
        switch (tier)
        {
            case 0:
                money -= amount;
                UIManager.instance.SetAmountResource(tier, money);
                break;
            case 1:
                wood -= amount;
                UIManager.instance.SetAmountResource(tier, wood);
                break;
            case 2:
                stone -= amount;
                UIManager.instance.SetAmountResource(tier, stone);
                break;
            case 3:
                iron -= amount;
                UIManager.instance.SetAmountResource(tier, iron);
                break;
            case 4:
                gold -= amount;
                UIManager.instance.SetAmountResource(tier, gold);
                break;
            case 5:
                shard -= amount;
                UIManager.instance.SetAmountResource(tier, shard);
                break;
        }
    }
    public void RemoveResource(string priceUnit, int amount)
    {
        switch (priceUnit)
        {
            case "money":
                RemoveResource(0, amount);
                break;
            case "wood":
                RemoveResource(1, amount);
                break;
            case "stone":
                RemoveResource(2, amount);
                break;
            case "iron":
                RemoveResource(3, amount);
                break;
            case "gold":
                RemoveResource(4, amount);
                break;
            case "shard":
                RemoveResource(5, amount);
                break;
        }
    }

    public int GetResource(int index)
    {
        switch (index)
        {
            case 0:
                return money;
            case 1:
                return wood;
            case 2:
                return stone;
            case 3:
                return iron;
            case 4:
                return gold;
            case 5:
                return shard;
        }
        return 0;
    }
    public int GetResource(string priceUnit)
    {
        switch (priceUnit)
        {
            case "money":
                return GetResource(0);
            case "wood":
                return GetResource(1);
            case "stone":
                return GetResource(2);
            case "iron":
                return GetResource(3);
            case "gold":
                return GetResource(4);
            case "shard":
                return GetResource(5);
        }
        return 0;
    }
}
