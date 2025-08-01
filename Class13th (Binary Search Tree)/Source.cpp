#include <iostream>

using namespace std;

template <typename T>
class Set
{
private:
    struct Node
    {
        T data;

        Node* left;
        Node* right;
    };

    Node* root;
public:
    Set()
    {
        root = nullptr;
    }

    Node* create_node(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;
        newNode->left = nullptr;
        newNode->right = nullptr;

        return newNode;
    }

    void insert(T data)
    {
        if (root == nullptr)
        {
            root = create_node(data);
        }
        else
        {
            Node* currentNode = root;

            while (currentNode != nullptr)
            {
                if (currentNode->data == data)
                {
                    return;
                }
                else if (currentNode->data > data)
                {
                    if (currentNode->left == nullptr)
                    {
                        currentNode->left = create_node(data);

                        return;
                    }
                    else
                    {
                        currentNode = currentNode->left;
                    }
                }
                else
                {
                    if (currentNode->right == nullptr)
                    {
                        currentNode->right = create_node(data);

                        return;
                    }
                    else
                    {
                        currentNode = currentNode->right;
                    }
                }
            }
        }
    }

    void release(Node* root)
    {
        if (root != nullptr)
        {
            release(root->left);

            release(root->right);

            delete root;
        }
    }

    void erase(T data)
    {
        Node* currentNode = root;
        Node* parentNode = nullptr;

        while (currentNode != nullptr && currentNode->data != data)
        {
            parentNode = currentNode;

            if (currentNode->data > data)
            {
                currentNode = currentNode->left;
            }
            else
            {
                currentNode = currentNode->right;
            }
        }

        if (currentNode == nullptr)
        {
            cout << "the data does not exist" << endl;
        }
        else if (currentNode->left == nullptr && currentNode->right == nullptr)
        {
            if (parentNode != nullptr)
            {
                if (parentNode->left == currentNode)
                {
                    parentNode->left = nullptr;
                }
                else
                {
                    parentNode->right = nullptr;
                }
            }
            else
            {
                root = nullptr;
            }
        }
        else if (currentNode->left == nullptr || currentNode->right == nullptr)
        {
            if (currentNode == root)
            {
                if (currentNode->left != nullptr)
                {
                    root = currentNode->left;
                }
                else
                {
                    root = currentNode->right;
                }
            }
            else
            {
                if (currentNode->left != nullptr)
                {
                    parentNode->left = currentNode->left;
                }
                else
                {
                    parentNode->right = currentNode->right;
                }
            }
        }
        else
        {
            Node* childNode = currentNode->right;
            Node* traceNode = currentNode;

            while (childNode->left != nullptr)
            {
                traceNode = childNode;

                childNode = childNode->left;
            }

            currentNode->data = childNode->data;

            if (traceNode == currentNode)
            {
                traceNode->right = childNode->right;
            }
            else
            {
                traceNode->left = childNode->right;
            }

            delete childNode;

            return;
        }

        delete currentNode;
    }


    void inorder()
    {
        inorder(root);
    }

    void inorder(Node* root)
    {
        if (root != nullptr)
        {
            inorder(root->left);

            cout << root->data << " ";

            inorder(root->right);
        }
    }

    ~Set()
    {
        release(root);
    }

};

int main()
{
    Set<int> set;

    set.insert(10);
    set.insert(6);
    set.insert(15);
    set.insert(20);
    set.insert(12);

    set.erase(15);

    set.inorder();

    return 0;
}
