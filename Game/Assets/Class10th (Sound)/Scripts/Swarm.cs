using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Swarm : MonoBehaviour
{
    [SerializeField] int deathCount;
    [SerializeField] Animator animator;
    [SerializeField] AudioClip attackSound;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    public void Die()
    {
        animator.SetTrigger("Die");
    }

    public void OnDamage(int count)
    {
        deathCount += count;

        if(deathCount >= 5)
        {
            Die();
        }

        SoundManager.Instance.Sound(attackSound);
    }

    public void Release()
    {
        Destroy(gameObject);
    }
}
