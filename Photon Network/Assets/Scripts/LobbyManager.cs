using UnityEngine;
using Photon.Realtime;
using Photon.Pun;
using UnityEngine.UI;

public class LobbyManager : MonoBehaviourPunCallbacks
{
    [SerializeField] Canvas lobbyCanvas;

    private void Awake()
    {
        if(PhotonNetwork.IsConnected)
        {
            lobbyCanvas.gameObject.SetActive(false);
        }     
    }

    public void Connect()
    {
        // 서버에 접속하는 함수
        PhotonNetwork.ConnectUsingSettings();

        lobbyCanvas.gameObject.SetActive(false);
    }

    public override void OnJoinedLobby()
    {
        if (lobbyCanvas.gameObject.activeSelf)
        {
            lobbyCanvas.gameObject.SetActive(true);
        }
    }

    public override void OnConnectedToMaster()
    {
        // JoinLobby : 특정 로비를 생성하여 진입하는 함수
        PhotonNetwork.JoinLobby
        (
           new TypedLobby
           (
               "Default",
               LobbyType.Default
           )                    
        );
    }
}
