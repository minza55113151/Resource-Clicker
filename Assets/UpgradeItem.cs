using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeItem : MonoBehaviour, ISaveable
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
    public void LoadData()
    {
        nUpgrade = PlayerPrefs.GetInt(upgradeName, 0);
    }
    public void SaveData()
    {
        PlayerPrefs.SetInt(upgradeName, nUpgrade);
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
        //check nUpgrade
        if (nUpgrade >= maxUpgrade)
            return;
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
                if (n <= 5)
                {
                    icon.sprite = priceUnitIcons[n + 1];
                }
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
                WorkerInfo.instance.harvestSpeed *= 0.8f;
                break;
            case "workerdamage":
                WorkerInfo.instance.harvestDamage += 1;
                break;
            case "workerwalkspeed":
                WorkerInfo.instance.walkSpeed *= 1.3f;
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
