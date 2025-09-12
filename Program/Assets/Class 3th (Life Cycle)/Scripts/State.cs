using UnityEngine;

public class State : MonoBehaviour
{
    private void Awake()
    {
        // Awake : 객체가 생성될 때 호출되며, 스크립트가 비활성화되어 있을 때에도
        //         호출되고, 단 한 번만 호출되는 이벤트 함수입니다.

        Debug.Log("Awake");
    }

    private void OnEnable()
    {
        // OnEnable : 객체가 활성화되었을 때 호출되는 이벤트 함수입니다.
        Debug.Log("OnEnable");
    }

    private void Start()
    {
        // Start : 객체가 생성되었을 때 호출되며, 단 한 번만 호출되는 이벤트 함수입니다.
        Debug.Log("Start");
    }

    private void FixedUpdate()
    {
        // FixedUpdate : timestep에 설정된 값에 따라 일정한 간격으로 호출되는 이벤트 함수입니다.
        Debug.Log("Fixed Update");
    }

    private void Update()
    {
        // Update : 객체가 활성화되는 동안, 매 프레임마다 호출되는 이벤트 함수입니다.
        Debug.Log("Update");
    }

    private void LateUpdate()
    {
        // LateUpdate : 한 프레임의 마지막 단계에서 호출되는 이벤트 함수입니다.
        Debug.Log("Late Update");
    }

    private void OnDisable()
    {
        // OnDisable : 객체가 비활성화되었을 때 호출되는 이벤트 함수입니다.
        Debug.Log("OnDisable");
    }

    private void OnDestroy()
    {
        // OnDestroy : 객체가 삭제되었을 때 호출되는 이벤트 함수입니다.
        Debug.Log("OnDestroy");
    }
}
