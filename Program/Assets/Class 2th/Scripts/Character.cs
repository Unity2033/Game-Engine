using UnityEngine;

public class Character : MonoBehaviour
{
    public Ability ability;

    void Start()
    {
        Debug.Log(ability.strength);
    }
}
