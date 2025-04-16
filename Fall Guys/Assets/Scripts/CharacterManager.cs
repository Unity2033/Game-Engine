using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterManager : MonoBehaviour
{
    void Start()
    {
        Debug.Log(PhotonNetwork.CurrentRoom.PlayerCount);


        PhotonNetwork.Instantiate("Character", Vector3.zero, Quaternion.identity);
    }
}
