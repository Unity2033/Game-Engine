using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Health : MonoBehaviour
{
    private float initHealth;
    private float health = 100;

    [SerializeField] Image fillImage;
    [SerializeField] Slider healthSlider;

    [SerializeField] int [] stateHealths;

    private void Awake()
    {
  
        healthSlider = GetComponentInChildren<Slider>();
    }

    void Start()
    {
        initHealth = health;

        healthSlider.value = health / initHealth;

        OnState();
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            OnDamage(10);
        }
    }

    public void OnDamage(float damage)
    {
        health -= damage;

        healthSlider.value = health / initHealth;

        OnState();
    }

    public void OnState()
    {
        if(health >= stateHealths[0])
        {
            fillImage.color = new Color(0, 1, 0);
        }
        else if(health >= stateHealths[1])
        {
            fillImage.color = new Color(1, 1, 0);
        }
        else
        {
            fillImage.color = new Color(1, 0, 0);
        }
    }
}
