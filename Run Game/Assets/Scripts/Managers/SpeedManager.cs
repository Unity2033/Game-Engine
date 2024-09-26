using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedManager : State
{
    [SerializeField] float speed = 30f;
    [SerializeField] float limitSpeed = 75f;

    [SerializeField] float incraseValue = 5.0f;

    public float Speed
    {
        get { return speed; }
    }

    private void Awake()
    {
        StartCoroutine(Increase());
    }

    public IEnumerator Increase()
    {
        while(state == true && speed < limitSpeed)
        {
            yield return CoroutineCache.WaitForSecond(10);

            speed += incraseValue;
        }
    }
}
