using UnityEngine;
using Photon.Pun;

public class Character : MonoBehaviourPun
{
    [SerializeField] Camera virtualCamera;

    void Start()
    {
        DisableCamera();
    }

    void Update()
    {
        
    }

    void DisableCamera()
    {
        // photonView.IsMine : 현재 객체가 나 자신이라면
        if (photonView.IsMine)
        {
            Camera.main.gameObject.SetActive(false);
        }
        else
        {
            virtualCamera.gameObject.SetActive(false); 
        }
    }
}
