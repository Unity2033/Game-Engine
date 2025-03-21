using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    public void Execute()
    {
        GameManager.Instance.Execute();

        StartCoroutine(SceneryManager.Instance.AsyncLoad(1));
    }

    public void Exit()
    {
#if UNITY_EDITOR
       UnityEditor.EditorApplication.isPlaying = false;
#else
       Application.Quit();
#endif
    }
}
