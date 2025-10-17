using System.Collections;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneryManager : MonoBehaviour
{
    [SerializeField] Slider slider;
    [SerializeField] GameObject screen;

    void Start()
    {
        
    }

    public void LoadScene(int buildIndex)
    {
       
    }

    // public IEnumerator TranstionScene(int index)
    // {
    //     slider.value = 0;
    // 
    //     screen.SetActive(true);
    // 
    //     // <AsyncOperation>
    //     // - allowSceneActivation
    //     // 장면이 준비된 즉시 장면이 활성되는 것을 허용하는 변수입니다.
    // 
    // }


}
