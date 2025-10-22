using UnityEngine;

public class Publisher : MonoBehaviour
{
    private void Start()
    {
        EventManager.Publish(Condition.START);
    }

    public void Publish(int condition)
    {
        EventManager.Publish((Condition)condition);
    }
}
