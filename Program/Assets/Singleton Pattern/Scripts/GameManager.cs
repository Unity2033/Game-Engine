using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] bool state = true;

    [SerializeField] static GameManager instance;
   
    public bool State { get { return state; } }

    public static GameManager Instance { get { return instance; } }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void OnClick()
    {
        state = !state;
    }
}
