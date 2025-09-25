using System.Collections.Generic;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    [SerializeField] int count;
    [SerializeField] float time;

    [SerializeField] GameObject prefab;
    [SerializeField] List<GameObject> list; 

    void Start()
    {
        Create();
    }

    void Create()
    {
        for(int i = 0; i < count; i++)
        {
            GameObject clone = Instantiate(prefab, transform);

            clone.SetActive(false);

            list.Add(clone);
        }
    }

    private void Update()
    {
        time += Time.deltaTime;

        if(time >= 5.0f)
        {
            Debug.Log("event call");

            time = 0.0f;
        }

    }

}
