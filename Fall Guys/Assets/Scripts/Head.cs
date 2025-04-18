using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rotation))]
public class Head : MonoBehaviour
{
    [SerializeField] Rotation rotation;

    private void Awake()
    {
        rotation = GetComponent<Rotation>();
    }

    // Update is called once per frame
    void Update()
    {
        rotation.OnMouseX();

        rotation.RotateX(transform);
    }
}
