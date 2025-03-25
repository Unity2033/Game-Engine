using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SpeedManager : Singleton<SpeedManager>
{
    [SerializeField] float speed = 30.0f;
    [SerializeField] float limitSpeed = 60.0f;

    [SerializeField] WaitForSeconds waitForSeconds = new WaitForSeconds(5.0f);

    public float Speed { get { return speed; } }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    IEnumerator Increase()
    {
        while(GameManager.Instance.State && speed < limitSpeed)
        {
            yield return waitForSeconds;

            speed += 2.5f;
        }
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode loadSceneMode)
    {
        speed = 30f;

        if(scene.buildIndex == 1)
        {
            StartCoroutine(Increase());
        }
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }
}
