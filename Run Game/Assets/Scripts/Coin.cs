using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour, IColliderable
{
    [SerializeField] float speed;
    [SerializeField] GameObject rotationObject;

    [SerializeField] ParticleSystem particleSystem;

    public void Activate()
    {
        particleSystem.Play();

        gameObject.GetComponent<BoxCollider>().enabled = false;
        gameObject.GetComponent<MeshRenderer>().enabled = false;
    }

    private void OnEnable()
    {
        rotationObject = GameObject.Find("Rotation GameObject");

        speed = rotationObject.GetComponent<RotationObject>().Speed;

        transform.localRotation = rotationObject.transform.localRotation;
    }

    void Update()
    {
        transform.Rotate(0, speed * Time.deltaTime, 0);
    }
}
