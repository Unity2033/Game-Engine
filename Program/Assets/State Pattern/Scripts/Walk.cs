using UnityEngine;

public class Walk : IStateable
{
    public void Enter(Character character)
    {
      
    }

    public void Exit(Character character)
    {
        character.animator.SetInteger("X", 0);
        character.animator.SetInteger("Y", 0);
    }

    public void Update(Character character)
    {
        int x = (int)Input.GetAxisRaw("Horizontal");
        int y = (int)Input.GetAxisRaw("Vertical");

        if (Input.GetKeyDown(KeyCode.Space))
        {
            character.SwitchState(new Attack());
        }

        if((x == 0) && (y == 0))
        {
            character.SwitchState(new Idle());
        }

        character.animator.SetInteger("X", x);
        character.animator.SetInteger("Y", y);
    }
}
