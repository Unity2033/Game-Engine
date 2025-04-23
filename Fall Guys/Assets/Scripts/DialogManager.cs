using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class DialogManager : MonoBehaviourPunCallbacks
{
    [SerializeField] InputField inputField;
    [SerializeField] ScrollRect scrollRect;
    [SerializeField] Transform parentTransform;

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Return))
        {
            inputField.ActivateInputField();

            string talk = inputField.text;

            // RPC Target.All : ���� �뿡 �ִ� ��� Ŭ���̾�Ʈ���� Talk() �Լ��� 
            // �����϶�� ����� �����մϴ�.
            photonView.RPC("Talk", RpcTarget.All, talk);

            // inputField�� �ؽ�Ʈ�� �ʱ�ȭ�մϴ�.
            inputField.text = "";
        }    
    }

    [PunRPC]
    void Talk(string message)
    {
        // prefab�� �ϳ� ������ ���� text�� ���� �����մϴ�.
        GameObject talk = Instantiate(Resources.Load<GameObject>("Talk"));

        // prefab ������Ʈ�� Text ������Ʈ�� �����ؼ� text�� ���� �����մϴ�.
        talk.GetComponent<Text>().text = message;

        // ��ũ�� �� - content ������Ʈ�� �ڽ����� ����մϴ�.
        talk.transform.SetParent(parentTransform);

        // ä���� �Է��� �Ŀ��� �̾ �Է��� �� �� �ֵ��� �����մϴ�.
        inputField.ActivateInputField();

        // Canvas�� �������� ����ȭ ��ŵ�ϴ�.
        Canvas.ForceUpdateCanvases();

        // ��ũ���� ��ġ�� �ʱ�ȭ�մϴ�.
        scrollRect.verticalNormalizedPosition = 0.0f;
    }


}
