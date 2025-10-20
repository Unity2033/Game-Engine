using System.Collections;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneryManager : MonoBehaviour
{
    [SerializeField] static SceneryManager instance;

    [SerializeField] Slider slider;
    [SerializeField] GameObject screen;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;

            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(instance);
        }
    }

    public void LoadScene(int buildIndex)
    {
        StartCoroutine(TranstionScene(buildIndex));
    }

    public IEnumerator TranstionScene(int index)
    {
        slider.value = 0;
    
        screen.SetActive(true);

        // <AsyncOperation>
        // - allowSceneActivation
        // 장면이 준비된 즉시 장면이 활성되는 것을 허용하는 변수입니다.
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(index);

        asyncOperation.allowSceneActivation = false;

        // <AsyncOperation>
        // - isDone
        // 해당 동작이 완료되었는 지 나타내는 변수입니다. (읽기 전용)
        while(asyncOperation.isDone == false)
        {
            // <AsyncOperation>
            // - progress 
            // 작업의 진행 상태를 나타내는 변수입니다. (읽기 전용)
            if(asyncOperation.progress >= 0.9f)
            {
                slider.value = Mathf.Lerp(slider.value, 1.0f, Time.deltaTime);

                if(slider.value >= 0.99f)
                {
                    slider.value = 1.0f;

                    asyncOperation.allowSceneActivation = true;
                }
            }
            else
            {
                slider.value = asyncOperation.progress;
            }

            yield return null;
        }

        screen.SetActive(false);
    }


}
