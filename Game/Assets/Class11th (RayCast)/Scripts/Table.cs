using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Table : MonoBehaviour, IInteractable
{
    public void Interact()
    {
        Debug.Log("Table");
    }
}
