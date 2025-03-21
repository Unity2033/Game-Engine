using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Select : MonoBehaviour
{
    [SerializeField] Text buttonText;
    [SerializeField] Sound sound = new Sound(); 

    private void Awake()
    {
        buttonText = GetComponentInChildren<Text>();
    }

    public void OnEnter()
    {
        buttonText.fontSize = 80;
    }

    public void OnExit()
    {
        buttonText.fontSize = 65;
    }

    public void OnSelect()
    {
        buttonText.fontSize = 50;
    }

}
