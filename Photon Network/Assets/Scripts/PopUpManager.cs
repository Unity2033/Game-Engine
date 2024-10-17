using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AlarmType
{
    SIGNINFAILURE,
    SIGNUPFAILURE,
    SIGNUPSUCCESS,
}


public class PopUpManager : MonoBehaviour
{
    [SerializeField] List<GameObject> popUpList;

    private static PopUpManager instance;

    public static PopUpManager Instance
    {
        get { return instance; }
    }

    public void Awake()
    {
        popUpList.Capacity = 10;

        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);

            return;
        }

        DontDestroyOnLoad(gameObject);
    }

    public void Show(AlarmType alarmType, string content)
    {
         popUpList[(int)alarmType].GetComponent<PopUp>().SetText(content);
         
         popUpList[(int)alarmType].SetActive(true);       
    }
}
