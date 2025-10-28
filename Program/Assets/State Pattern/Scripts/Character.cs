using UnityEngine;

public class Character : MonoBehaviour
{
    public Animator animator;

    [SerializeField] IStateable stateable;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        stateable.Update(this);
    }

    public void SwitchState(IStateable state)
    {
        stateable?.Exit(this);

        stateable = state;

        stateable?.Enter(this);
    }

 
}
