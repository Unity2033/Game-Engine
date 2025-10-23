using UnityEngine;
using System.Collections.Generic;

public class WeaponManager : MonoBehaviour
{
    [SerializeField] int count;
    [SerializeField] List<Weapon> weapons;

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            Swap();
        }

        if(Input.GetMouseButtonDown(0))
        {
            weapons[count].Attack();
        }
    }

    public void Swap()
    {
        weapons[count].gameObject.SetActive(false);

        count = (count + 1) % weapons.Count;

        weapons[count].gameObject.SetActive(true);
    }
}
