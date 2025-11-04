using UnityEngine;

public class Slow : Decorator
{
    public override void Activate()
    {
        debuff.Activate();

        Debug.Log("Slow");
    }
}
