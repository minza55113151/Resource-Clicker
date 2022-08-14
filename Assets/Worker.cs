using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Worker : MonoBehaviour
{

    [SerializeField] private WorkerScriptableObject workerInfo;

    private GameObject targetResource = null;

    private float harvestTimer = 0f;
    private Vector2 walkPos;

    private Animator animator;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    private void Update()
    {
        HarvestResource();
        Walk();
        Animation();
    }

    private void AnimationSetBool(string name, bool value)
    {
        animator.SetBool("WalkUp", false);
        animator.SetBool("WalkDown", false);
        animator.SetBool("WalkLeft", false);
        animator.SetBool("WalkRight", false);
        animator.SetBool(name, value);
        
    }

    private void Animation()
    {
        // Animation
        Vector2 direction = walkPos - (Vector2)transform.position;
        if (Mathf.Abs(direction.x) > Mathf.Abs(direction.y))
        {
            //left
            if (direction.x < 0)
            {
                AnimationSetBool("WalkLeft", true);
            }
            //right
            else
            {
                AnimationSetBool("WalkRight", true);
            }
        }
        else if (Mathf.Abs(direction.x) < Mathf.Abs(direction.y))
        {
            //down
            if (direction.y < 0)
            {
                AnimationSetBool("WalkDown", true);
            }
            //up
            else
            {
                AnimationSetBool("WalkUp", true);
            }
        }
        else
        {
            AnimationSetBool("WalkLeft", false);
        }
    }

    private void Walk()
    {
        // have resource target and not already walk to it
        if (targetResource != null && Vector2.Distance(transform.position, targetResource.transform.position) > workerInfo.harvestRadius)
        {
            //walk to resource
            walkPos = targetResource.transform.position;
            transform.position = Vector2.MoveTowards(transform.position, walkPos, workerInfo.walkSpeed * Time.deltaTime);
        }
        // have resource target and already walk to it
        else if (targetResource != null && Vector2.Distance(transform.position, targetResource.transform.position) <= workerInfo.harvestRadius)
        {
            //no walk
            walkPos = Vector2.zero;
        }
        // no task but no target to walk
        else if (walkPos == Vector2.zero)
        {
            //walk to random position
            walkPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
            transform.position = Vector2.MoveTowards(transform.position, walkPos, workerInfo.walkSpeed / 2 * Time.deltaTime);
        }
        // no task and have target to walk
        else
        {
            transform.position = Vector2.MoveTowards(transform.position, walkPos, workerInfo.walkSpeed / 2 * Time.deltaTime);
        }           
    }

    private void HarvestResource()
    {
        if (targetResource == null)
        {
            targetResource = FindRandomResource();
            if (targetResource == null)
            {
                return;
            }
        }
        if (Vector2.Distance(transform.position, targetResource.transform.position) <= workerInfo.harvestRadius)
        {
            HitResource();
        }
    }

    private void HitResource()
    {
        harvestTimer += Time.deltaTime;
        if (harvestTimer > workerInfo.harvestSpeed) 
        { 
            harvestTimer -= workerInfo.harvestSpeed;
            targetResource.GetComponent<ResourceObject>().Hit(workerInfo.harvestDamage);
        }
    }
    private GameObject FindRandomResource()
    {
        GameObject[] resources = GameObject.FindGameObjectsWithTag("Resource");
        if (resources.Length == 0)
        {
            return null;
        }
        return resources[Random.Range(0, resources.Length)];
    }
    private GameObject FindClosestResource()
    {
        GameObject[] resources = GameObject.FindGameObjectsWithTag("Resource");
        //find closest
        float minDist = Mathf.Infinity;
        GameObject closestResource = null;
        foreach (GameObject resource in resources)
        {
            float dist = Vector2.Distance(transform.position, resource.transform.position);
            if (dist < minDist && dist < 10f)
            {
                minDist = dist;
                closestResource = resource;
            }
        }
        return closestResource;
    }
}
