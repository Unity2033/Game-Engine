using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab.ClientModels;
using Photon.Realtime;
using Photon.Pun;
using UnityEngine.UI;
using PlayFab;

public class PlayfabManager : MonoBehaviourPunCallbacks
{
    [SerializeField] GameObject failurePanel;
    [SerializeField] InputField emailInputField;
    [SerializeField] InputField passwordInputField;

    [SerializeField] string version = "1.0f";

    public void Login()
    {
        var request = new LoginWithEmailAddressRequest
        {
            Email = emailInputField.text,
            Password = passwordInputField.text,
        };

        PlayFabClientAPI.LoginWithEmailAddress(request, Success, Fail);
    }

    public void Success(LoginResult loginResult)
    {
        PhotonNetwork.AutomaticallySyncScene = false;

        PhotonNetwork.GameVersion = version;

        PhotonNetwork.ConnectUsingSettings();
    }

    public void Fail(PlayFabError playFabError)
    {
        failurePanel.SetActive(true);

        Debug.Log(playFabError.GenerateErrorReport());
    }

    public override void OnConnectedToMaster()
    {
        // JoinLobby() : 특정 로비를 생성하여 진입하는 함수
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        PhotonNetwork.LoadLevel("Lobby");
    }
}
