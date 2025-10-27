using System.Collections;
using UnityEngine;

public class Grenade : Weapon
{
    [SerializeField] Coroutine coroutine;
    [SerializeField] MeshRenderer meshRenderer;

    [SerializeField] Material [ ] materials;

    private void Awake()
    {
        meshRenderer = GetComponent<MeshRenderer>();
    }

    public override void Attack()
    {
        if (coroutine == null)
        {
            coroutine = StartCoroutine(Activate());
        }
    }

    IEnumerator Activate()
    {
        meshRenderer.material = materials[0];

        yield return new WaitForSeconds(3.0f);

        meshRenderer.material = materials[1];

        coroutine = null;
    }
}
