using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemCountingUI : MonoBehaviour
{
    [SerializeField] private Text text;
    [SerializeField] private RectTransform icon;
    private float iconMaxScale;
    private Vector3 startLocalScale;

    private void Start()
    {
        iconMaxScale = UIManager.instance.iconMaxScale;
        startLocalScale = icon.localScale;
    }
    
    public void SetText(string value)
    {
        if (text == null)
            Debug.Log("fuckkk");
        text.text = value;
        HitIcon();
    }
    
    public void HitIcon()
    {
        StartCoroutine(AnimateIconHit());
    }

    private IEnumerator AnimateIconHit()
    {
        while (icon.localScale.x < iconMaxScale)
        {
            icon.localScale += new Vector3(0.1f, 0.1f, 0.1f);
            yield return null;
        }
        while (icon.localScale.x > startLocalScale.x)
        {
            icon.localScale -= new Vector3(0.1f, 0.1f, 0.1f);
            yield return null;
        }
    }
}
