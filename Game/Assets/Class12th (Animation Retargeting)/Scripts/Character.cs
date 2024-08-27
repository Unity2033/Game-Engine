using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Character : MonoBehaviour
{
    [SerializeField] Animator animator;
    [SerializeField] UnityEvent unityEvent;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
        {
            if (animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
            {
                if (unityEvent != null)
                {
                    unityEvent.Invoke();
                }

                animator.Rebind();
            }
        }
    }
}
