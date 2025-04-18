using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] float mouseX;
    [SerializeField] float mouseY;

    public void OnMouseX()
    {
        mouseY += Input.GetAxisRaw("Mouse Y") * speed * Time.deltaTime;
    }

    public void OnMouseY()
    {
        mouseX += Input.GetAxisRaw("Mouse X") * speed * Time.deltaTime;
    }

    public void RotateX(Transform transformPosition)
    {
        mouseY = Mathf.Clamp(mouseY, -65, 65);

        transformPosition.localEulerAngles = new Vector3(-mouseY, 0, 0);
    }

    public void RotateY(Transform transformPosition)
    {
        transformPosition.eulerAngles = new Vector3(0, mouseX, 0);
    }
}
