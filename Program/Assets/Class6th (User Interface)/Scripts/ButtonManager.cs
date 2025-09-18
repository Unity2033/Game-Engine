using System;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    [SerializeField] string [ ] titleList;
    [SerializeField] Button [ ] buttonList;  

    void Start()
    {
        Action [ ] actions = { Execute, Option, Quit };

        for(int i = 0; i< buttonList.Length; i++)
        {
            int index = i;

            buttonList[i].onClick.AddListener(() => actions[index]());

            buttonList[i].GetComponentInChildren<Text>().text = titleList[index];
        }
    }

    public void Execute()
    {
        Debug.Log("Execute");
    }

    public void Option()
    {
        Debug.Log("Option");
    }

    public void Quit()
    {
        Debug.Log("Quit");
    }

}
