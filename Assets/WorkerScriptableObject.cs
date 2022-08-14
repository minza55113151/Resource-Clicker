using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "WorkerInfo", menuName = "SriptableObject/WorkerInfo")]
public class WorkerScriptableObject : ScriptableObject
{
    public float walkSpeed;
    public int harvestDamage;
    public float harvestSpeed;
    public float harvestRadius;
}
