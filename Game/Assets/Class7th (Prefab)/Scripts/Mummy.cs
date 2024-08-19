using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Health))]
public class Mummy : MonoBehaviour
{
    [SerializeField] Health health;

    void Awake()
    {
        health = GetComponent<Health>();
    }

    void Update()
    {
        
    }
}
