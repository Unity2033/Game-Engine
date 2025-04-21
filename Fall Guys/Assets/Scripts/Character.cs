using UnityEngine;
using Photon.Pun;

[RequireComponent(typeof(Mouse))]
[RequireComponent(typeof(Rotation))]
public class Character : MonoBehaviourPun
{
    [SerializeField] float speed;
    [SerializeField] float power;
    [SerializeField] float gravity;
    
    [SerializeField] Vector3 direction;
    [SerializeField] Vector3 inputDirection;

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

        Control();

        Jump();

        Move();

        Rotate();
    }

    void Control()
    {
        inputDirection.x = Input.GetAxisRaw("Horizontal");
        inputDirection.z = Input.GetAxisRaw("Vertical");

        inputDirection.Normalize();

        inputDirection = characterController.transform.TransformDirection(inputDirection);
    }

    void Jump()
    {
        if(characterController.isGrounded)
        {
            direction.y = -1.0f;

            if(Input.GetButtonDown("Jump"))
            {
                direction.y = power;
            }
        }
        else
        {
            direction.y -= gravity * Time.deltaTime;
        }
    }

    void Rotate()
    {
        rotation.OnMouseY();

        rotation.RotateY(transform);
    }

    void Move()
    {
        Vector3 modifiedTransform = new Vector3(inputDirection.x, direction.y, inputDirection.z);

        characterController.Move(modifiedTransform * speed * Time.deltaTime);

        direction.y = modifiedTransform.y;
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
