using UnityEngine;

public class Player : Debuff
{
    [SerializeField] float speed; // 이동 속도
    [SerializeField] float stopDistance = 0.1f; // 목표 지점에 얼마나 가까워졌는 지 확인하는 변수
    [SerializeField] float rotationSpeed = 50f; // 회전 속도

    [SerializeField] bool isMoving = false;
    [SerializeField] Vector3 targetPosition;
    [SerializeField] RaycastHit rayCastHit;

    [SerializeField] Rigidbody rigidbody;

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
    }

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

    }

    private void FixedUpdate()
    {
        if (isMoving)
        {
            Move();
        }
    }

    public void Move()
    {
        // 목표 지점 방향 계산
        Vector3 direction = (targetPosition - transform.position);

        direction.y = 0f; ; // Y축 이동을 방지

        float distance = direction.magnitude;

        // 도착 지점 확인
        if(distance <= stopDistance)
        {
            isMoving = false;

            rigidbody.linearVelocity = Vector3.zero;

            return;
        }

        rigidbody.MovePosition(rigidbody.position + direction.normalized * speed * Time.fixedDeltaTime);

        Quaternion targetRotation = Quaternion.LookRotation(direction);

        Quaternion smoothRoation = Quaternion.Slerp(rigidbody.rotation, targetRotation, rotationSpeed * Time.fixedDeltaTime);

        rigidbody.MoveRotation(smoothRoation);   
    }

    public override void Activate()
    {
        Debug.Log("Player");
    }
}
