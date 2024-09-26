using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinManager : MonoBehaviour
{
    [SerializeField] GameObject prefab;
    [SerializeField] List<GameObject> coins;

    [SerializeField] float positionX = 4.0f;

    [SerializeField] float offset = 2.5f;
    [SerializeField] int createCount = 16;

    void Awake()
    {
        coins.Capacity = 20;

        Create();
    }

    public void Create()
    {
        for(int i = 0; i < createCount; i++)
        {
            GameObject clone = ResourcesManager.Instance.Instantiate("Coin", gameObject.transform);

            clone.transform.localPosition = new Vector3(0, 0, offset * i);

            clone.GetComponent<BoxCollider>().enabled = false;
            clone.GetComponent<MeshRenderer>().enabled = false;

            coins.Add(clone);
        }
    }

    public void InitializePosition()
    {
        transform.localPosition = new Vector3(positionX * Random.Range(-1, 2), 0, 0);

        for(int i = 0; i < coins.Count; i++)
        {
            coins[i].GetComponent<BoxCollider>().enabled = true;
            coins[i].GetComponent<MeshRenderer>().enabled = true;   
        }
    }

}
