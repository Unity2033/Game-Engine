using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    [SerializeField] GameObject prefab;

    void Start()
    {
        prefab = Instantiate(Resources.Load<GameObject>("Pier"));
    }

}
