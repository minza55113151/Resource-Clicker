using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIManager : MonoBehaviour
{
    public static UIManager instance;

    //resource ui
    public float iconMaxScale;
    [SerializeField] private ItemCountingUI moneyUI;
    [SerializeField] private ItemCountingUI woodUI;
    [SerializeField] private ItemCountingUI stoneUI;
    [SerializeField] private ItemCountingUI ironUI;
    [SerializeField] private ItemCountingUI goldUI;
    [SerializeField] private ItemCountingUI shardUI;

    //upgrade menu
    [SerializeField] private GameObject upgradeMenu;
    private bool isUpgradeMenuOpen = false;

    //sell menu
    [SerializeField] private GameObject sellMenu;
    private bool isSellMenuOpen = false;

    //toggle spawn button
    [SerializeField] private Image toggleSpawnButton;


    private void Awake()
    {
        instance = this;
        upgradeMenu.SetActive(false);
        sellMenu.SetActive(false);
    }

    public void ToggleUpgradeMenu()
    {
        isUpgradeMenuOpen = !isUpgradeMenuOpen;
        if (isUpgradeMenuOpen && isSellMenuOpen)
            ToggleSellMenu();
        upgradeMenu.SetActive(isUpgradeMenuOpen);
    }   
    public void ToggleSellMenu()
    {
        isSellMenuOpen = !isSellMenuOpen;
        if (isUpgradeMenuOpen && isSellMenuOpen)
            ToggleUpgradeMenu();
        sellMenu.SetActive(isSellMenuOpen);
    }
    
    public void ToggleSpawnButton()
    {
        bool isSpawning = SpawnManager.instance.ToggleSpawning();
        if (isSpawning)
        {
            toggleSpawnButton.color = Color.green;
            
        }
        else
        {
            toggleSpawnButton.color = Color.red;
        }
    }
    
    public void SetAmountResource(int tier, int amount)
    {
        switch (tier)
        {
            case 0:
                moneyUI.SetText(amount.ToString());
                break;
            case 1:
                woodUI.SetText(amount.ToString());
                break;
            case 2:
                stoneUI.SetText(amount.ToString());
                break;
            case 3:
                ironUI.SetText(amount.ToString());
                break;
            case 4:
                goldUI.SetText(amount.ToString());
                break;
            case 5:
                shardUI.SetText(amount.ToString());
                break;
        }
    }
}
