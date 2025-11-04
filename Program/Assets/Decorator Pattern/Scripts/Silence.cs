using UnityEngine;

public class Silence : Decorator
{
    public override void Activate()
    {
        debuff.Activate();

        Debug.Log("Silence");
    }
}
