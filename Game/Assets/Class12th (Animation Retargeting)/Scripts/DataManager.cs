using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class DataManager : MonoBehaviour
{
    [SerializeField] int score;
    [SerializeField] ScoreUI scoreUI;

    void Awake()
    {
        Load();
    }

    public void IncreaseScore()
    {
        int random = Random.Range(5, 11);
        score += random;

        scoreUI.OnUpdate(random);
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

    public void Initialized()
    {
        PlayerPrefs.DeleteAll();

        Load();
    }
}
