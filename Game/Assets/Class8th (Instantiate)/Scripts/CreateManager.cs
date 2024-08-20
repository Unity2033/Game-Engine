using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateManager : MonoBehaviour
{
    [SerializeField] int createCount;

    [SerializeField] GameObject [] prefabs;

    [SerializeField] GameObject cloneObject;

    void Start()
    {
        StartCoroutine(Create());
    }

    IEnumerator Create()
    {
        while (createCount < 4)
        {
            if (cloneObject == null)
            {
                cloneObject = Instantiate(prefabs[createCount++]);
            }

            yield return new WaitForSeconds(5f);
        }
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            Destroy(cloneObject);
        }
    }

}
