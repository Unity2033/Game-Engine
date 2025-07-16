#include <iostream>

using namespace std;

template <typename T>
class List
{
private:
    struct Node
    {
        T data;
        Node* next;
        Node* previous;
    };

    int size;
    Node* head;
    Node* tail;
public:
    List()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }

    void push_front(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;
        newNode->next = nullptr;
        newNode->previous = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            head->previous = newNode;
            newNode->next = head;

            head = newNode;
        }

        size++;
    }

    void pop_front()
    {
        if (head == nullptr)
        {
            cout << "linked list is empty" << endl;
        }
        else
        {
            Node* deleteNode = head;

            if (head == tail)
            {
                head = nullptr;
                tail = nullptr;
            }
            else
            {
                deleteNode->next->previous = nullptr;

                head = head->next;
            }

            delete deleteNode;

            size--;
        }
    }

    void push_back(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;
        newNode->next = nullptr;
        newNode->previous = nullptr;

        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->previous = tail;

            tail = newNode;
        }

        size++;
    }

    void pop_back()
    {
        if (tail == nullptr)
        {
            cout << "linked list is empty" << endl;
        }
        else
        {
            Node* deleteNode = tail;

            if (head == tail)
            {
                head = nullptr;
                tail = nullptr;
            }
            else
            {
                tail->previous->next = nullptr;

                tail = tail->previous;
            }

            delete deleteNode;

            size--;
        }
    }

    bool empty()
    {
        return (head == nullptr);
    }

    void remove(T data)
    {
        Node* deleteNode = head;
        Node* nextNode = nullptr;

        while (deleteNode != nullptr)
        {
            if (deleteNode->data == data)
            {
                if (deleteNode == head)
                {
                    deleteNode = deleteNode->next;

                    pop_front();
                }
                else if (deleteNode == tail)
                {
                    pop_back();

                    deleteNode = nullptr;
                }
                else
                {
                    deleteNode->previous->next = deleteNode->next;

                    deleteNode->next->previous = deleteNode->previous;

                    nextNode = deleteNode->next;

                    delete deleteNode;

                    deleteNode = nextNode;

                    size--;
                }
            }
            else
            {
                deleteNode = deleteNode->next;
            }

        }
    }

    ~List()
    {
        while (head != nullptr)
        {
            pop_front();
        }
    }
};

int main()
{
    List<int> list;

    list.push_front(10);
    list.push_front(20);

    list.pop_back();
    list.pop_front();

    list.push_back(5);
    list.push_back(1);
    list.push_back(5);

    list.remove(5);

    cout << list.empty() << endl;

    return 0;
}
