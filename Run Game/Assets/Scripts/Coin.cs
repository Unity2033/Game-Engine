using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : State, IColliderable
{
    [SerializeField] float speed;
    [SerializeField] GameObject rotationObject;

    public void Activate()
    {
        gameObject.GetComponent<BoxCollider>().enabled = false;
        gameObject.GetComponent<MeshRenderer>().enabled = false;
    }

    private void OnEnable()
    {
        base.OnEnable();

        rotationObject = GameObject.Find("Rotation GameObject");

        speed = rotationObject.GetComponent<RotationObject>().Speed;

        transform.localRotation = rotationObject.transform.localRotation;
    }

    void Update()
    {
        if (state == false) return;

        transform.Rotate(0, speed * Time.deltaTime, 0);
    }
}
