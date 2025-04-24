using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using UnityEngine;

public class MasterManager : MonoBehaviourPunCallbacks
{
    [SerializeField] GameObject platform;
    [SerializeField] Vector3 direction = new Vector3(-12.5f, 0,-27.5f);
    [SerializeField] WaitForSeconds waitForSeconds = new WaitForSeconds(5f);

    void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            platform = PhotonNetwork.InstantiateRoomObject("Platform", direction, Quaternion.identity);

            StartCoroutine(Activate());
        }
    }

    IEnumerator Activate()
    {
        while(true)
        {
            yield return waitForSeconds;

            if (PhotonNetwork.CurrentRoom != null)
            {
                yield break;
            }

            if (platform.activeSelf)
            {
                platform.SetActive(false);
            }
            else
            {
                platform.SetActive(true);
            }
        }
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        PhotonNetwork.SetMasterClient(PhotonNetwork.PlayerList[0]);

        if (platform == null)
        {
            platform = GameObject.Find("Platform(Clone)");
        }
        
        StartCoroutine(Activate());
    }
}
