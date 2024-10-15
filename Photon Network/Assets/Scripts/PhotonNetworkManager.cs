using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;
using UnityEngine.UI;

public class PhotonNetworkManager : MonoBehaviourPunCallbacks
{
    [SerializeField] InputField emailInputField;
    [SerializeField] InputField passwordInputField;

    public void Success()
    {
        PhotonNetwork.AutomaticallySyncScene = false;

        PhotonNetwork.GameVersion = "1.0f";

        PhotonNetwork.LoadLevel("Lobby Scene");
    }

}
