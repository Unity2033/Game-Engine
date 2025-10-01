using UnityEngine;

public class Control : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] Vector3 direction;
    [SerializeField] Rigidbody rigidBody;

    [SerializeField] ForceMode forceMode;

    private void Awake()
    {
        forceMode = ForceMode.Force;
        rigidBody = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        direction.Normalize();
    }

    private void FixedUpdate()
    {
        rigidBody.AddForce(direction * speed, forceMode);
    }

    public void Soar()
    {
        speed = 0.5f;

        direction = Vector3.up;

        forceMode = ForceMode.Impulse;
    }

    public void Revert()
    {
        speed = 5.0f;

        direction = Vector3.zero;

        forceMode = ForceMode.Force;
    }

}
