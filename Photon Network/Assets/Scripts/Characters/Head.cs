using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

[RequireComponent(typeof(Rotation))]
public class Head : MonoBehaviourPunCallbacks
{
    private Rotation rotation;

    void Start()
    {
        rotation = GetComponent<Rotation>();    
    }

    void Update()
    {
        if (photonView.IsMine == false) return;

        rotation.RotateX();
    }
}
