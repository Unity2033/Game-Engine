using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class View : MonoBehaviourPunCallbacks
{
    [SerializeField] Text nickName;
    [SerializeField] Camera remoteCamera;

    void Start()
    {
        nickName.text = photonView.Owner.NickName;
    }

    void Update()
    {
        transform.forward = remoteCamera.transform.forward;
    }
}
