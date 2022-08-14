using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemCountingUI : MonoBehaviour
{
    [SerializeField] private Text text;
    [SerializeField] private RectTransform icon;
    private float iconMaxScale;

    private void Start()
    {
        iconMaxScale = UIManager.instance.iconMaxScale;
    }
    
    public void SetText(string value)
    {
        text.text = value;
        HitIcon();
    }
    
    public void HitIcon()
    {
        StartCoroutine(AnimateIconHit());
    }

    private IEnumerator AnimateIconHit()
    {
        Vector3 startScale = icon.localScale;
        while (icon.localScale.x < iconMaxScale)
        {
            icon.localScale += new Vector3(0.1f, 0.1f, 0.1f);
            yield return null;
        }
        while (icon.localScale.x > startScale.x)
        {
            icon.localScale -= new Vector3(0.1f, 0.1f, 0.1f);
            yield return null;
        }
    }
}
