using UnityEngine;

public class Bat : Creature
{
    [SerializeField] Vector3 direction;

    void Start()
    {
        direction = Vector3.up;
    }

    public override void Behaviour()
    {
        transform.Rotate(direction, speed * Time.deltaTime, Space.World);
    }
}
