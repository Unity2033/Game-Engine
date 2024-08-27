using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : MonoBehaviour
{
    [SerializeField] int score;

    void Awake()
    {
        Load();
    }

    public void IncreaseScore()
    {
        score += 10;
        PlayerPrefs.SetInt("Score", score);
    }

    public void Load()
    {
        score = PlayerPrefs.GetInt("Score");
    }

    public void Save()
    {
        PlayerPrefs.Save();
    }
}
