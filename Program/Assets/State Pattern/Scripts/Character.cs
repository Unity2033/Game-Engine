using UnityEngine;

public class Character : MonoBehaviour
{
    public Animator animator;

    [SerializeField] IStateable stateable;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    private void Start()
    {
        stateable = new Idle(); 
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
