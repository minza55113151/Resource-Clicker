using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourceObject : MonoBehaviour
{
    [SerializeField] public int hp;
    [SerializeField] public int tier;
    [SerializeField] public string resourceName;

    [SerializeField] private float shakeDuration;
    [SerializeField] private float shakeRadius;
    private Vector3 spawnPosition;
    public bool isBig;

    private void Start()
    {
        spawnPosition = transform.position;
    }

    private void Update()
    {
        
    }
    private void OnMouseDown()
    {
        Hit(Player.instance.clickDamage);
    }
    public void Hit(int damage)
    {
        StartCoroutine(Shake());
        hp -= damage;
        SoundManager.instance.PlayPunch();
        if (hp <= 0)
        {
            Destroy(gameObject);
        }
    }
    
    public void SetBig()
    {
        isBig = true;
        transform.localScale *= 3;
    }

    private void OnDestroy()
    {
        //destroy effect
        //item drop to ui
        //add count resource
        //drop +- 1
        if (resourceName == "tree")
        {
            SoundManager.instance.PlayTreeBreak();
        }
        else if (resourceName == "stone" || resourceName == "iron" || resourceName == "gold")
        {
            SoundManager.instance.PlayStoneBreak();
        }
        else if (resourceName == "shard")
        {
            SoundManager.instance.PlayGlassBreak();
        }
        ResourceManager.instance.AddResource(this);
    }
    private IEnumerator Shake()
    {
        float sTime = 0f;
        while (sTime < shakeDuration)
        {
            sTime += Time.deltaTime;
            transform.position = spawnPosition + Random.insideUnitSphere * shakeRadius;
            yield return null;
        }
        transform.position = spawnPosition;
    }
}
