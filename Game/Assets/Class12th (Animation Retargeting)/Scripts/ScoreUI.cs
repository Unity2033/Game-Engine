using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ScoreUI : MonoBehaviour
{
    [SerializeField] Text scoreText;
    [SerializeField] TextMeshProUGUI textMeshProUGUI;

    void Awake()
    {
        scoreText = GetComponent<Text>();
    }

    public void OnUpdate(int random)
    {
        scoreText.text = "Score\n" + random.ToString();
    }
}
