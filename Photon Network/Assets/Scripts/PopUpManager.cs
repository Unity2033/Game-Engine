using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    public void Create(string popUpName)
    {
        for(int i = 0; i < popUpList.Count; i++)
        {
            if(popUpName == popUpList[i].name)
            {
                popUpList[i].gameObject.SetActive(true);

                return;
            }
        }

        popUpList.Add(Instantiate(Resources.Load<GameObject>(popUpName), gameObject.transform.GetChild(0)));
    }
}
