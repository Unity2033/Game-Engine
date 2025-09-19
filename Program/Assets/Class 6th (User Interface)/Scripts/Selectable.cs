using UnityEngine;
using UnityEngine.UI;

public class Selectable : MonoBehaviour
{
    [SerializeField] Text titleText;

    private void Awake()
    {
        titleText = GetComponentInChildren<Text>();
    }

    public void Enter()
    {
        titleText.fontSize = 100;
    }

    public void Exit()
    {
        titleText.fontSize = 75;
    }

    public void Down()
    {
        titleText.fontSize = 50;
    }

}
