using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    private static SoundManager instance;

    public static SoundManager Instance 
    {
        get { return instance; }
        set { instance = value; }
    }

    [SerializeField] AudioSource effectAudioSource;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void Sound(AudioClip audioClip)
    {
        effectAudioSource.PlayOneShot(audioClip);
    }
}
