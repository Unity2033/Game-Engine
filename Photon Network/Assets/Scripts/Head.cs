using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rotation))]
public class Head : MonoBehaviour
{
    private Rotation rotation;

    void Start()
    {
        rotation = GetComponent<Rotation>();    
    }

    void Update()
    {
        rotation.RotateX();
    }
}
