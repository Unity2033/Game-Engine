using System.Collections;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    [SerializeField] float radius;
    [SerializeField] GameObject prefab;
    [SerializeField] WaitForSeconds waitForSeconds;

    private void Awake()
    {
        waitForSeconds = new WaitForSeconds(5);
    }

    void Start()
    {
        StartCoroutine(CreateRoutine());
    }

    IEnumerator CreateRoutine()
    {
        while(true)
        {
            GameObject bee = Instantiate(prefab);

            Vector2 direction = Random.insideUnitCircle.normalized * radius;

            bee.transform.position = new Vector3(direction.x, 0, direction.y);

            yield return waitForSeconds;
        }
    }
}
