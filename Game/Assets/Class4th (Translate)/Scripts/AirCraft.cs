using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AirCraft : MonoBehaviour
{
    [SerializeField] Vector3 direction;
    [SerializeField] float speed = 1.0f;

    void Start()
    {
        
    }

    void Update()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        // 벡터의 정규화
        direction.Normalize();

        // P = P0 + vt
        // Time.deltaTime : 마지막 프레임이 완료된 후 경과한 시간을 초 단위로 반환하는 값입니다.
        transform.position = transform.position + direction * speed * Time.deltaTime;
    }
}
