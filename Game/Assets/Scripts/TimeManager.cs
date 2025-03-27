using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TimeManager : Singleton<TimeManager>
{
    [SerializeField] float bestTime;

    [SerializeField] float limitTime = 0.5f; 
    [SerializeField] float activeTime = 2.5f;

    public float ActiveTime
    {
        get { return activeTime; }
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    public void SetTime(float time)
    {
        bestTime = PlayerPrefs.GetFloat("Time");

        Debug.Log("Best Time : " + bestTime);
        Debug.Log("Current Time : " + time);

        if (bestTime < time)
        {
            PlayerPrefs.SetFloat("Time", time);
        }
    }

    IEnumerator Decrease()
    {
        while(activeTime > limitTime && GameManager.Instance.State)
        {
            yield return CoroutineCache.WaitForSecond(5.0f);

            activeTime -= 0.25f;
        }
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode loadSceneMode)
    {
        activeTime = 2.5f;

        if (scene.buildIndex == 1)
        {
            StartCoroutine(Decrease());
        }
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }
}
