using UnityEngine;
using Photon.Pun;

[RequireComponent(typeof(Mouse))]
[RequireComponent(typeof(Rotation))]
public class Character : MonoBehaviourPun
{
    [SerializeField] float speed;
    [SerializeField] Vector3 direction;
    [SerializeField] Rotation rotation;
    [SerializeField] Camera virtualCamera;
    [SerializeField] CharacterController characterController;

    private void Awake()
    {
        rotation = GetComponent<Rotation>();
        characterController = GetComponent<CharacterController>();
    }

    void Start()
    {
        DisableCamera();
    }

    void Update()
    {
        if (photonView.IsMine == false) return;

        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        direction.Normalize();

        Move();

        Rotate();
    }

    void Rotate()
    {
        rotation.OnMouseY();

        rotation.RotateY(transform);
    }

    void Move()
    {
        Vector3 modifiedTransform = transform.TransformDirection(direction * speed * Time.deltaTime);

        characterController.Move(modifiedTransform);
    }

    void DisableCamera()
    {
        // photonView.IsMine : 현재 객체가 나 자신이라면
        if (photonView.IsMine)
        {
            Camera.main.gameObject.SetActive(false);
        }
        else
        {
            virtualCamera.gameObject.SetActive(false); 
        }
    }
}
