using Photon.Pun;
using UnityEngine;
using Photon.Realtime;
using System;

public class GameManager : MonoBehaviourPunCallbacks
{
    [SerializeField] double time;
    [SerializeField] double initializeTime;

    private void Start()
    {
        initializeTime = PhotonNetwork.Time;
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        Debug.Log("Entered");

        if(PhotonNetwork.CurrentRoom.PlayerCount >= PhotonNetwork.CurrentRoom.MaxPlayers)
        {
            Debug.Log("Game Start");
        }
    }

    private void Update()
    {
        time = PhotonNetwork.Time - initializeTime;

        if(Input.GetKeyDown(KeyCode.Escape))
        {
            Exit();
        }
    }

    public void Exit()
    {
        PhotonNetwork.LeaveRoom();
    }

    public override void OnLeftRoom()
    {
        Cursor.visible = true;

        Cursor.lockState = CursorLockMode.None;

        PhotonNetwork.LoadLevel("Lobby");
    }
}
