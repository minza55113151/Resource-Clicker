using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SellItem : MonoBehaviour
{

    [SerializeField] private string itemName;
    [SerializeField] private int price;
    [SerializeField] private InputField amount;
    
    public void OnSellClick()
    {
        if (int.Parse(amount.text) > ResourceManager.instance.GetResource(itemName))
        {
            int num = ResourceManager.instance.GetResource(itemName);
            ResourceManager.instance.RemoveResource(itemName, num);
            ResourceManager.instance.AddResource(0, num * price);
        }
        else
        {
            int num = int.Parse(amount.text);
            ResourceManager.instance.RemoveResource(itemName, num);
            ResourceManager.instance.AddResource(0, num * price);
        }
        SoundManager.instance.PlayMoneyIncome();
        amount.text = "1";
    }

    public void OnMaxClick()
    {
        amount.text = ResourceManager.instance.GetResource(itemName).ToString();
    }
}
