using UnityEngine;

public class Fear : Decorator
{
    public Fear(IStatus status) : base(status) { }

    public override void Update()
    {
        base.Update();

        Debug.Log("Fear State");
    }
}
