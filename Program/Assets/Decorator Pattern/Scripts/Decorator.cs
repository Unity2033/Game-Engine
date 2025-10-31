using UnityEngine;

public class Decorator : IStatus
{
    protected IStatus innerStatus;

    public Decorator(IStatus status)
    {
        innerStatus = status;
    }

    public virtual void Apply()
    {
        innerStatus.Apply();
    }

    public virtual void Update()
    {
        innerStatus.Update();
    }
}
