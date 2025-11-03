using UnityEngine;

public class Decorator : IStatus
{
    protected IStatus innerStatus;

    public Decorator(IStatus status)
    {
        innerStatus = status;
    }

    public virtual void Update()
    {
        innerStatus.Update();
    }
}
