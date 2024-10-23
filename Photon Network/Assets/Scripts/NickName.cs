using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class NickName : MonoBehaviourPunCallbacks
{
    [SerializeField] Button button;
    [SerializeField] string nickName;
    [SerializeField] InputField inputField;

    public void SetName()
    {
        // 1. nickName에 inputField로 입력한 값을 저장합니다.
        nickName = inputField.text;

        // 2. PhotonNetwork.NickName에 nickName 값을 넣어줍니다.
        PhotonNetwork.NickName = nickName;

        // 3. NickName을 저장합니다.
        PlayerPrefs.SetString("NickName", PhotonNetwork.NickName);

        // 4. 비활성화합니다.
        gameObject.SetActive(false);
    }

    void Update()
    {
        if(inputField.text.Length <= 0)
        {
            button.interactable = false;
        }
        else
        {
            button.interactable = true;
        }
    }
}
