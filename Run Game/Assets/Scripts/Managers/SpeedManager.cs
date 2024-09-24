using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedManager : Singleton<SpeedManager>
{
    [SerializeField] float speed = 30f;
    [SerializeField] float limitSpeed = 75f;

    [SerializeField] float incraseValue = 5.0f;

    public float Speed
    {
        get { return speed; }
    }

    public IEnumerator Increase()
    {
        while(speed < limitSpeed)
        {
            yield return CoroutineCache.WaitForSecond(10);

            Debug.Log("Log");

            speed += incraseValue;
        }
    }
}
