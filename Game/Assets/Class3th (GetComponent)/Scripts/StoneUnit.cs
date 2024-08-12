using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Move))]
public class StoneUnit : MonoBehaviour
{
    [SerializeField] private Move move;

    private void Awake()
    {
         move = GetComponent<Move>();
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.W))
        {
            move.OnMove(Vector3.forward);
        }

        if(Input.GetKeyDown(KeyCode.A))
        {
            move.OnMove(Vector3.left);
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            move.OnMove(Vector3.back);
        }

        if (Input.GetKeyDown(KeyCode.D))
        {
            move.OnMove(Vector3.right);
        }

    }
}
