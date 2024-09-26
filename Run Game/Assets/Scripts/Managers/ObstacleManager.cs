using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleManager : MonoBehaviour
{
    [SerializeField] GameObject prefab;
    [SerializeField] List<GameObject> obstacles;

    [SerializeField] int createCount = 5;

    void Start()
    {
        obstacles.Capacity = 10;

        Create();
    }

    public void Create()
    {
        for(int i = 0; i < createCount; i++)
        {
            prefab = ResourcesManager.Instance.Instantiate("Cone", gameObject.transform);

            prefab.SetActive(false);

            obstacles.Add(prefab);
        }
    }

}
