#include <iostream>

using namespace std;

template <typename T>
class Set
{
private:
    struct Node
    {
        T data;

        Node * left;
        Node * right;
    };

    int size;
    Node * root;
public:
    Set()
    {
        size = 0;
        root = nullptr;
    }

    Node * create_node(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;
        newNode->left = nullptr;
        newNode->right = nullptr;

        size++;

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
            Node * currentNode = root;

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

};

int main()
{
    Set<int> set;

    set.insert(10);
    set.insert(6);
    set.insert(15);
    set.insert(20);

    return 0;
}
