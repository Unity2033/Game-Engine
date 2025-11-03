using UnityEngine;

public class Slow : Decorator
{
    public Slow(IStatus status) : base(status) { }

    public override void Update()
    {
        base.Update();

        Debug.Log("Slow State");
    }
}
