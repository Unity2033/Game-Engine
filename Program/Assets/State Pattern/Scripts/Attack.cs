using UnityEngine;

public class Attack : IStateable
{
    public void Enter(Character character)
    {
        character.animator.ResetTrigger("Attack");
        character.animator.SetTrigger("Attack");
    }

    public void Exit(Character character)
    {
        character.animator.SetInteger("X", 0);
        character.animator.SetInteger("Y", 0);
    }

    public void Update(Character character)
    {
        AnimatorStateInfo animatorStateInfo = character.animator.GetCurrentAnimatorStateInfo(0);

        if (animatorStateInfo.IsName("Attack") && character.animator.IsInTransition(0))
        {
            character.SwitchState(new Idle());
        }
    }
}
