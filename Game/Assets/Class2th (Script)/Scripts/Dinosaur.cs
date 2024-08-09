using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dinosaur : MonoBehaviour
{
    private void Awake()
    {
        // Awake() 함수
        // 게임 오브젝트 생성된 후에 호출되는 함수로, 
        // 단 한번만 호출되며, 스크립트가 비활성화된 상태일 때도 실행됩니다.

        Debug.Log("Awake");
    }

    private void OnEnable()
    {
        // OnEnable() 함수
        // 게임 오브젝트가 활성되었을때 호출되는 함수입니다.

        Debug.Log("OnEnable");
    }

    void Start()
    {
        // Start() 함수
        // 게임 오브젝트가 생성된 후에 호출되는 함수로,
        // 단 한번만 호출되며, 스크립트가 활성화된 상태일 때만 호출됩니다.

        Debug.Log("Start");
    }

    private void FixedUpdate()
    {
        // FixedUpdate() 함수
        // Timestep에 설정된 값에 따라 일정한 간격으로 호출되는 이벤트 함수입니다.
        Debug.Log("Fixed Update");
    }

    void Update()
    {
        // Update() 함수
        // 프레임마다 호출되는 이벤트 함수입니다.
        Debug.Log("Update");
    }

    private void LateUpdate()
    {
        // LateUpdate() 함수
        // Update 함수가 끝나고, 호출되는 이벤트 함수입니다.
        Debug.Log("LateUpdate");
    }

    private void OnDisable()
    {
        // OnDisable() 함수
        // 게임 오브젝트가 비활성화되었을 때 호출되는 이벤트 함수입니다.
        Debug.Log("OnDisable");
    }

    private void OnDestroy()
    {
        // OnDestroy()
        // 게임 오브젝트가 삭제되었을 때 호출되는 이벤트 함수입니다.
        Debug.Log("OnDestroy");
    }
}
