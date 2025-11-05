using UnityEngine;

public class Bee : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] Vector3 direction;
    [SerializeField] Transform targetTransform;

    void Start()
    {
        targetTransform = GameObject.Find("Sand Pillar").transform;

        direction = transform.position - targetTransform.position;

        transform.LookAt(direction);
    }

    void Update()
    {
        transform.Translate(direction * speed * Time.deltaTime);
    }
}
