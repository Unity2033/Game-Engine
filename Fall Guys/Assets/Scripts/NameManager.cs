using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NameManager : MonoBehaviourPunCallbacks
{
    [SerializeField] GameObject namePanel;

    void Start()
    {
        PhotonNetwork.NickName = PlayerPrefs.GetString("Name");

        if (string.IsNullOrEmpty(PhotonNetwork.NickName))
        {
            namePanel.SetActive(true);
        }
        else
        {
            namePanel.SetActive(false);
        }
    }
}
