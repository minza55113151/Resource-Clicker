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
            DestroyResource();
        }
    }
    
    public void SetBig()
    {
        isBig = true;
        transform.localScale *= 3;
        hp *= 10;
    }

    private void DestroyResource()
    {
        //destroy effect
        //item drop to ui
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
        Destroy(gameObject);
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
