using UnityEngine;

public class Rifle : Weapon
{
    [SerializeField] GameObject bullet;
    [SerializeField] Transform createPosition;

    public override void Attack()
    {
        Instantiate(bullet, createPosition.position, Quaternion.Euler(90,0,0));
    }
}
