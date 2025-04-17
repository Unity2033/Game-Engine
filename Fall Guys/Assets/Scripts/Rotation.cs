using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] float mouseY;

    public void OnMouseY()
    {
        mouseY += Input.GetAxisRaw("Mouse X") * speed * Time.deltaTime;
    }

    public void RotateY(Transform transformPosition)
    {
        transformPosition.eulerAngles = new Vector3(0, mouseY, 0);
    }
}
