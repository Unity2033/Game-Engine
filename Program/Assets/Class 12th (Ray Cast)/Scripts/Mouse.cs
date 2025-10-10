using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Rendering;

public class Mouse : MonoBehaviour
{
    [SerializeField] Ray ray;
    [SerializeField] float distance;
    [SerializeField] Texture2D texture2D;
    [SerializeField] LayerMask layerMask;
    [SerializeField] RaycastHit rayCastHit;

    [SerializeField] Encampment encampment;

    [SerializeField] Manual manual;

    private void Awake()
    {
        distance = Mathf.Infinity;

        Cursor.SetCursor(texture2D, Vector2.zero, CursorMode.Auto);
    }

    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            Debug.DrawRay(ray.origin, ray.direction * distance, Color.green);

            if(Physics.Raycast(ray, out rayCastHit, 100, layerMask))
            {
                Debug.DrawLine(ray.origin, rayCastHit.point, Color.red);

                if(rayCastHit.collider.TryGetComponent(out encampment))
                {
                    manual.Bind(encampment.Title, encampment.Description);
                }

                rayCastHit.collider.transform.GetChild(0).gameObject.SetActive(true);
            }
        }
    }
}
