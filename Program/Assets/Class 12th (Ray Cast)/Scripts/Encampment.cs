using UnityEngine;

public abstract class Encampment : MonoBehaviour
{
    [SerializeField] protected string title;
    [SerializeField] protected string description;

    public string Title { get { return title; } }
    public string Description { get { return description; } }

    protected void Start()
    {
        Describe();
    }

    public abstract void Describe();
}
