using UnityEngine;

public class Idle : IStateable
{
    public void Enter(Character character)
    {
        character.animator.SetInteger("X", 0);
        character.animator.SetInteger("Y", 0);
    }

    public void Exit(Character character)
    {
       
    }

    public void Update(Character character)
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            character.SwitchState(new Attack());
        }

        int x = Mathf.Abs((int)Input.GetAxisRaw("Horizontal"));
        int y = Mathf.Abs((int)Input.GetAxisRaw("Vertical"));

        if ((x > 0) || (y > 0))
        {
            character.SwitchState(new Walk());
        }
    }
}
