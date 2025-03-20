using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleManager : MonoBehaviour
{
    [SerializeField] List<string> obstacleNames;
    [SerializeField] List<GameObject> obstacles;

    [SerializeField] int random;
    [SerializeField] int createCount = 5;

    void Start()
    {
        obstacles.Capacity = 10;

        Create();

        StartCoroutine(ActiveObstacle());
    }

    public void Create()
    {
        for(int i = 0; i < createCount; i++)
        {
            GameObject prefab = Instantiate(Resources.Load<GameObject>(obstacleNames[Random.Range(0, obstacleNames.Count)]), gameObject.transform);

            prefab.SetActive(false);

            obstacles.Add(prefab);
        }
    }

    public IEnumerator ActiveObstacle()
    {
        int count = 0;

        while(true)
        {
            if(count >= obstacles.Count)
            {
                yield break; ;
            }

            yield return new WaitForSeconds(2.5f);

            random = Random.Range(0, obstacles.Count);

            while (obstacles[random].activeSelf == true)
            {
                random = (random + 1) % obstacles.Count;
            }

            obstacles[random].SetActive(true);

            count++;
        }
    }

}
