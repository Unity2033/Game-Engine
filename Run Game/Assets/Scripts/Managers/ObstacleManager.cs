using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleManager : MonoBehaviour
{
    [SerializeField] GameObject prefab;
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
            prefab = ResourcesManager.Instance.Instantiate("Cone", gameObject.transform);

            prefab.SetActive(false);

            obstacles.Add(prefab);
        }
    }

    public bool ExamineActive()
    {
        for(int i = 0; i < obstacles.Count; i++)
        {
            if (obstacles[i].activeSelf == false)
            {
                return false;
            }
        }

        return true;
    }

    public IEnumerator ActiveObstacle()
    {
        
        while(true)
        {
            yield return CoroutineCache.WaitForSecond(2.5f);

            random = Random.Range(0, obstacles.Count);

            // ���� ���� ������Ʈ�� Ȱ��ȭ�Ǿ� �ִ� �� Ȯ���մϴ�.
            while (obstacles[random].activeSelf == true)
            {
                // ���� ����Ʈ�� �ִ� ��� ���� ������Ʈ�� Ȱ��ȭ�Ǿ� �ִ� �� Ȯ���մϴ�.
                if(ExamineActive())
                {
                    // ��� ���� ������Ʈ�� Ȱ��ȭ�Ǿ� �ִٸ� ���� ������Ʈ�� ���� ������ ����
                    // obstacles ����Ʈ�� �־��ݴϴ�.
                    GameObject clone = ResourcesManager.Instance.Instantiate("Cone", gameObject.transform);

                    clone.SetActive(false);

                    obstacles.Add(clone);
                }
            
                // ���� �ε����� �ִ� ���� ������Ʈ�� Ȱ��ȭ�Ǿ� ������
                // random ������ ���� +1�� �ؼ� �ٽ� �˻��մϴ�.
                random = (random + 1) % obstacles.Count;
            }

            // �������� ������ Obstacle ������Ʈ�� Ȱ��ȭ�մϴ�.
            obstacles[random].SetActive(true);
        }
    }

}