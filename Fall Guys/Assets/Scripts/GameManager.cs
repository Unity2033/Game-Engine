using Photon.Pun;
using UnityEngine;
using Photon.Realtime;

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

        Debug.Log("Time : " + time);
    }
}
