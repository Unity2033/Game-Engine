using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Parallax : MonoBehaviour
{
    [SerializeField] Rect rect;
    [SerializeField] RawImage rawImage;

    [SerializeField] float speed;

    private void Awake()
    {
        rawImage = GetComponent<RawImage>();
    }

    private void Start()
    {
        rect = rawImage.uvRect;
    }

    void Update()
    {
        rect.x += speed * Time.deltaTime;

        rawImage.uvRect = rect;
    }
}
