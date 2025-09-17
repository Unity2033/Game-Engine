using UnityEngine;

public class Pilot : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] Vector3 direction;

    void Start()
    {
    
    }

    void Update()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        direction.Normalize();
    
        // Time.deltaTime 
        // 이전 프레임이 완료되는 시점부터 현재 프레임이 시작되기까지
        // 지난 시간을 반환하는 값입니다.
        transform.position = transform.position + direction * speed * Time.deltaTime;
    }
}
