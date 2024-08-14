using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mousey : MonoBehaviour
{
    [SerializeField] Animator animator;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.W))
        {
            if (animator.GetCurrentAnimatorStateInfo(0).IsName("Run") == false)
            {
                animator.SetTrigger("Run");
            }
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            if (animator.GetCurrentAnimatorStateInfo(0).IsName("Idle") == false)
            {
                animator.SetTrigger("Idle");
            }
        }
    }
}
