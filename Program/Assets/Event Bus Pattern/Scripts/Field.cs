using UnityEngine;

public class Field : MonoBehaviour
{
    [SerializeField] Animator animator;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    private void OnEnable()
    {
        EventManager.Subscribe(Condition.START, Execute);
        EventManager.Subscribe(Condition.PAUSE, Pause);
        EventManager.Subscribe(Condition.FINISH, Exit);
    }

    public void Pause()
    {
        animator.enabled = false;
    }

    public void Execute()
    {
        animator.enabled = true;
    }

    public void Exit()
    {
        Destroy(gameObject);
    }

    private void OnDisable()
    {
        EventManager.Unsubscribe(Condition.START, Execute);
        EventManager.Unsubscribe(Condition.PAUSE, Pause);
        EventManager.Unsubscribe(Condition.FINISH, Exit);
    }

}
