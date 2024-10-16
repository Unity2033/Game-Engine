using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopUp : MonoBehaviour
{
    [SerializeField] Text content;

    public void SetText(string contentText)
    {
        content.text = contentText;
    }

    public void OnConfirm()
    {
        gameObject.SetActive(false);
    }
}
