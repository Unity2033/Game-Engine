using UnityEngine;

public abstract class Creature : MonoBehaviour
{
    [SerializeField] protected float speed;

    public void Update()
    {
        if (GameManager.Instance.State == false) return;

        Behaviour();
    }

    public abstract void Behaviour();
}
