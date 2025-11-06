using System.Collections.Generic;
using UnityEngine;

public class ObjectPool : MonoBehaviour
{
    [SerializeField] int createCount = 5;

    private static ObjectPool instance;

    public static ObjectPool Instance { get; }

    [SerializeField] Queue<GameObject> queue = new Queue<GameObject>();

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }

        Create();
    }

    public void Create()
    {
        for(int i = 0; i < createCount; i++)
        {
            GameObject clone = Instantiate(Resources.Load<GameObject>("Bee"));

            clone.transform.SetParent(transform);

            clone.SetActive(false);

            queue.Enqueue(clone);
        }
    }

    public GameObject GetObject()
    {
        GameObject clone;

        if(queue.Count > 0) 
        {
            clone = queue.Dequeue();
        }
        else
        {
            clone = Instantiate(Resources.Load<GameObject>("Bee"), transform);
        }

        clone.SetActive(true);

        return clone;
    }

    public void ReturnObject(GameObject clone)
    {
        clone.SetActive(false);

        queue.Enqueue(clone);
    }
}
