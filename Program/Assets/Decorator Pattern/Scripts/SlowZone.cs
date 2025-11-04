using UnityEngine;

public class SlowZone : MonoBehaviour
{
    [SerializeField] Decorator slow;
    [SerializeField] Decorator fear;
    [SerializeField] Player player;

    private void Awake()
    {
        player = GameObject.Find("Character").GetComponent<Player>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.name == "Character")
        {
            slow.Set(fear.Set(player));

            slow.Activate();
        }
    }
}
