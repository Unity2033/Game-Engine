using UnityEngine;
using UnityEngine.UI;

public class Manual : MonoBehaviour
{
    [SerializeField] Text titleText;
    [SerializeField] Text descriptionText;

    private void Awake()
    {
        Bind("Manual", "A manual is a booklet or document that provides instructions or information about how to use, operate, or assemble something." +
            " It helps users understand the features and functions of a device, machine, or system.");
    }

    public void Bind(string title, string description)
    {
        titleText.text = title;
        descriptionText.text = description;
    }
}
