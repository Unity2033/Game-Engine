using UnityEngine;

public class ItemManager : MonoBehaviour
{
    [SerializeField] Item [ ] items;  

    void Start()
    {
        Initialize();
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {

        }
    }

    void Initialize()
    {
        for (int i = 0; i < items.Length; i++)
        {
            items[i].gameObject.SetActive(false);
        }
    }
}
