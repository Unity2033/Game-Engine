using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    [SerializeField] float mouseX;
    [SerializeField] float speed = 200.0f;

    public void RotateY()
    {
        mouseX += Input.GetAxisRaw("Mouse X") * speed * Time.deltaTime;

        transform.eulerAngles = new Vector3(0, mouseX, 0);
    }
}
