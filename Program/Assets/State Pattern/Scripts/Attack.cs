using UnityEngine;

public class Attack : IStateable
{
    public void Enter(Character character)
    {
        AnimatorStateInfo animatorStateInfo = character.animator.GetCurrentAnimatorStateInfo(0);

        if (character.animator.IsInTransition(0) || animatorStateInfo.IsName("Attack"))
        {
            return;
        }

        character.animator.SetTrigger("Attack");
    }

    public void Exit(Character character)
    {
       
    }

    public void Update(Character character)
    {
       
    }
}
