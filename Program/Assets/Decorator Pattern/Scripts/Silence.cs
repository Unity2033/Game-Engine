using UnityEngine;

public class Silence : Decorator
{
    public Silence(IStatus status) : base(status) { }

    public override void Update()
    {
        base.Update();

        Debug.Log("Slience State");
    }
}
