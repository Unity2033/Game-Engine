using System.Diagnostics.Contracts;
using UnityEngine;

public class Smelter : MonoBehaviour
{
    [SerializeField] int count;
    [SerializeField] float progress;

    public void Create()
    {
        Debug.Log("Create...");
    }

    public void Process(float progress)
    {
        this.progress += progress;

        Debug.Log("Progress : " + this.progress + "%");

        this.progress = this.progress % 100;
    }

    public void Enhance(int count)
    {
        this.count += count;

        Debug.Log("Enhancement Count : " + this.count);
    }
}
