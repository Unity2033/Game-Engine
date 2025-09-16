using UnityEngine;

public class ItemManager : MonoBehaviour
{
    [SerializeField] int count;
    [SerializeField] Item [ ] items;

    void Start()
    {
        Initialize();
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            Swap();
        }

        if(Input.GetMouseButtonDown(0))
        {
            if (items[count].gameObject.activeSelf)
            {
                items[count].Activate();
            }
        }
    }

    void Initialize()
    {
        for (int i = 0; i < items.Length; i++)
        {
            items[i].gameObject.SetActive(false);
        }

        count = items.Length - 1;
    }

    void Swap()
    {
        items[count].gameObject.SetActive(false);

        count = (count + 1) % items.Length;

        items[count].gameObject.SetActive(true);
    }
}
