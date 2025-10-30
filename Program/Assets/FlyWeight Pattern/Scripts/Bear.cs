using UnityEngine;

public class Bear : MonoBehaviour
{
    [SerializeField] float speed;

    void Update()
    {
        transform.position += transform.forward * speed * Time.deltaTime;
    }
}
