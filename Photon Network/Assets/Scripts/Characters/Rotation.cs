using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    [SerializeField] float mouseX;
    [SerializeField] float mouseY;
    [SerializeField] float speed = 200.0f;

    public void InputRotateY()
    {
        mouseX += Input.GetAxisRaw("Mouse X") * speed * Time.deltaTime;
    }

    public void RotateY(Rigidbody rigidbody)
    {
        rigidbody.transform.eulerAngles = new Vector3(0, mouseX, 0);
    }

    public void RotateX()
    {
        // mouseY에 마우스로 입력한 값을 저장합니다.
        mouseY += Input.GetAxisRaw("Mouse Y") * speed * Time.deltaTime;

        // mouseY의 값을 -65 ~ 65 사이의 값으로 제한합니다.
        mouseY = Mathf.Clamp(mouseY, -65, 65);

        // mouseY <- Mathf.Clamp(제한하는 값, 최소값, 최대값)
        transform.localEulerAngles = new Vector3(-mouseY, 0, 0);
    }
}
