using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    [SerializeField] int count;
    [SerializeField] float time;
    [SerializeField] int coroutineCount;

    [SerializeField] GameObject prefab;
    [SerializeField] List<GameObject> list;
    [SerializeField] List<Vector3> randomPosition;

    void Start()
    {
        Create();

        StartCoroutine(Coroutine());
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

    IEnumerator Coroutine()
    {
        while (coroutineCount < list.Count)
        {
            yield return new WaitForSeconds(5f);

            int index = Random.Range(0, list.Count);

            while (list[index].activeSelf)
            { 
                index = (index + 1) % list.Count;
            }

            list[index].SetActive(true);

            list[index].transform.localPosition = randomPosition[index];

            coroutineCount++;
        }
    }
}
