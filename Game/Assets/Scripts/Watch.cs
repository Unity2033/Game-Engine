using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Watch : MonoBehaviour
{
    [SerializeField] float time;

    [SerializeField] int minute;
    [SerializeField] int second;
    [SerializeField] int milliSeconds;

    [SerializeField] Text textTime;

    private void Awake()
    {
        textTime = GetComponent<Text>();
    }

    private void Start()
    {
        StartCoroutine(Measure());
    }

    IEnumerator Measure()
    {
        while(GameManager.Instance.State)
        {
            time += Time.deltaTime;

            minute = (int)time / 60;
            second = (int)time % 60;
            milliSeconds = (int)(time * 100) % 100;

            textTime.text = string.Format("{0:D2} : {1:D2} : {2:D2}", minute, second, milliSeconds);

            yield return null;
        }

        TimeManager.Instance.SetTime(time);
    }
}
