using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum RoadLine
{
    LEFT = -1,
    MIDDLE,
    RIGHT
}

public class Runner : State
{
    [SerializeField] RoadLine roadLine;
    [SerializeField] Rigidbody rigidBody;

    [SerializeField] float speed = 25.0f;
    [SerializeField] float positionX = 2.0f;

    private void Awake()
    {
        rigidBody = GetComponent<Rigidbody>();
    }

    private void OnEnable()
    {
        base.OnEnable();

        InputManager.Instance.action += OnKeyUpdate;
    }

    void Start()
    {
        roadLine = RoadLine.MIDDLE;
    }

    void OnKeyUpdate()
    {
        if (state == false) return;

        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (roadLine != RoadLine.LEFT)
            {
                roadLine--;
            }
        }

        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            if(roadLine != RoadLine.RIGHT)
            {
                roadLine++;
            }
        }
    }

    private void FixedUpdate()
    {
        if (state == false) return;

        Move();
    }

    void Move()
    {
        rigidBody.position = Vector3.Lerp
        (
             rigidBody.position,
             new Vector3(positionX * (int)roadLine, 0, 0),
             speed * Time.fixedDeltaTime
        );
    }

    private void OnTriggerEnter(Collider other)
    {
        IColliderable colliderable = other.GetComponent<IColliderable>();

        if(colliderable != null)
        {
            colliderable.Activate();
        }
    }

    private void OnDisable()
    {
        base.OnDisable();

        InputManager.Instance.action -= OnKeyUpdate;
    }
}
