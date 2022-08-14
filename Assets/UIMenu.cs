using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class UIMenu : MonoBehaviour
{
    private void Update()
    {
        //if not click to menu close it
        if (Input.GetMouseButtonDown(0))
        {
            if (!EventSystem.current.IsPointerOverGameObject())
            {
                gameObject.SetActive(false);
            }
        }
    }
}
