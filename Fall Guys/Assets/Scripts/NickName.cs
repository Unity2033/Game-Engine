using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class NickName : MonoBehaviourPunCallbacks
{
    [SerializeField] Button submitButton;
    [SerializeField] InputField inputField;

    private void Start()
    {
        inputField.onValueChanged.AddListener(Confirm);
    }

    public void SetName()
    {
        PlayerPrefs.SetString("Name", inputField.text);

        PhotonNetwork.NickName = PlayerPrefs.GetString("Name");

        gameObject.SetActive(false);
    }

    public void Confirm(string text)
    {
        text = inputField.text;

        submitButton.interactable = !string.IsNullOrEmpty(text);
    }
}
