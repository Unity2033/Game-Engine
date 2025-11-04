using UnityEngine;

public class Fear : Decorator
{
    public override void Activate()
    {
        debuff.Activate();

        Debug.Log("Fear");
    }
}
