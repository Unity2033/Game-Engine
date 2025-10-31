using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] float speed; // 이동 속도
    [SerializeField] float stopDistance = 0.1f; // 목표 지점에 얼마나 가까워졌는 지 확인하는 변수

    [SerializeField] bool isMoving = false;
    [SerializeField] Vector3 targetPosition;
    [SerializeField] RaycastHit rayCastHit;

    void Start()
    {
        targetPosition = transform.position;
    }

    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if(Physics.Raycast(ray, out rayCastHit))
            {
                targetPosition = rayCastHit.point;

                isMoving = true;
            }
        }

        if (isMoving)
        {
            Move();
        }
    }

    public void Move()
    {
        // 목표 지점 방향 계산
        Vector3 direction = (targetPosition - transform.position).normalized;

        float distance = Vector3.Distance(transform.position, targetPosition);

        transform.position += direction * speed * Time.deltaTime;

        // 도착 지점 확인
        if(distance <= stopDistance)
        {
            isMoving = false;
        }
        
    }
}
