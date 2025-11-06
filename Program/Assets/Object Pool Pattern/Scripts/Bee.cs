using UnityEngine;

public class Bee : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] Vector3 direction;
    [SerializeField] Transform targetTransform;

    void OnEnable()
    {
        targetTransform = GameObject.Find("Sand Pillar").transform;

        transform.LookAt(targetTransform);

        direction = (targetTransform.position - transform.position).normalized;
    }

    void Update()
    {
        transform.Translate(direction * speed * Time.deltaTime, Space.World);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Pillar"))
        {
            ObjectPool.Instance.ReturnObject(gameObject);
        }
    }
}
