using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeItem : MonoBehaviour
{

    public string upgradeName;
    public int[] price;
    public string[] priceUnit;
    public int nUpgrade;
    int maxUpgrade;

    [SerializeField] private Text textUpgradeName;
    [SerializeField] private Image icon;
    [SerializeField] private Text textPrice;
    [SerializeField] private Image priceUnitIcon;
    [SerializeField] private Sprite[] priceUnitIcons;

    private void Awake()
    {
        LoadData();
        maxUpgrade = Mathf.Min(price.Length, priceUnit.Length);
    }
    private void Start()
    {
        //setup
        SetUpItem();
        //icon
        if (upgradeName == "unlocknewresource")
            icon.sprite = priceUnitIcons[SpawnManager.instance.unlockCount + 1];
    }

    private void LoadData()
    {
        nUpgrade = PlayerPrefs.GetInt(upgradeName, 0);
    }
    private void SaveData()
    {
        PlayerPrefs.SetInt(upgradeName, nUpgrade);
    }
    private void OnApplicationQuit()
    {
        SaveData();
    }
    private void SetUpItem()
    {
        //check nUpgrade
        if (nUpgrade >= maxUpgrade)
        {
            //clear price unitprice
            textPrice.text = "MAX";
            priceUnitIcon.enabled = false;
            return;
        }
        //price
        textPrice.text = price[nUpgrade].ToString("0");
        //price unit
        priceUnitIcon.sprite = priceUnitIcons[PriceUnitStringtoIndex(priceUnit[nUpgrade])];
    }

    public void OnBuyClick()
    {
        //check money
        if (ResourceManager.instance.GetResource(PriceUnitStringtoIndex(priceUnit[nUpgrade])) < price[nUpgrade])
            return;
        //buy
        ResourceManager.instance.RemoveResource(PriceUnitStringtoIndex(priceUnit[nUpgrade]), price[nUpgrade]);
        //upgrade
        Upgrade();
        nUpgrade++;
        SetUpItem();
    }

    private void Upgrade()
    {
        switch (upgradeName)
        {
            case "unlocknewresource":
                //change icon
                int n = SpawnManager.instance.UnlockResource();
                if (n == 5)
                {
                    textUpgradeName.text = "Coming Soon...";
                }
                icon.sprite = priceUnitIcons[n + 1];
                
                break;
            case "resourcespawnrate":
                SpawnManager.instance.spawnRate *= 0.7f;
                break;
            case "clickdamage":
                Player.instance.clickDamage += 2;
                break;
            case "worker":
                WorkerManager.instance.SpawnWorker();
                break;
            case "workerspeed":
                WorkerManager.instance.workerInfo.harvestSpeed *= 0.8f;
                break;
            case "workerdamage":
                WorkerManager.instance.workerInfo.harvestDamage += 1;
                break;
            case "workerwalkspeed":
                WorkerManager.instance.workerInfo.walkSpeed *= 1.3f;
                break;
        }
    }
    
    private int PriceUnitStringtoIndex(string priceUnit)
    {
        switch (priceUnit)
        {
            case "money":
                return 0;
            case "wood":
                return 1;
            case "stone":
                return 2;
            case "iron":
                return 3;
            case "gold":
                return 4;
            case "shard":
                return 5;
        }
        return -1;
    }
}
