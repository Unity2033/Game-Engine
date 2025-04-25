using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using UnityEngine;

public class MasterManager : MonoBehaviourPunCallbacks
{
    [SerializeField] Vector3 direction = new Vector3(-12.5f, 0,-42.5f);

    void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            PhotonNetwork.InstantiateRoomObject("Victory Sphere", direction, Quaternion.identity);
        }
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        PhotonNetwork.SetMasterClient(PhotonNetwork.PlayerList[1]);    
    }
}
