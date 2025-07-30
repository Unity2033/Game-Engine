#include <iostream>

#define SIZE 10

using namespace std;

template<typename T>
class AdjacencyList
{
private:
    struct Node
    {
        T data;
        Node* next;

        Node(T data, Node* link = nullptr)
        {
            this->data = data;
            next = link;
        }
    };

    int size; // 정점의 개수
    T vertex[SIZE]; // 정점의 집합
    Node* list[SIZE]; // 인접 리스트

public:
    AdjacencyList()
    {
        size = 0;

        for (int i = 0; i < SIZE; i++)
        {
            list[i] = NULL;
            vertex[i] = NULL;
        }
    }

    void push(T data)
    {
        if (size >= SIZE)
        {
            cout << "Adjacency List Overflow" << endl;
        }
        else
        {
            vertex[size++] = data;
        }
    }

    void edge(int i, int j)
    {
        if (size <= 0)
        {
            cout << "adjacency list is empty" << endl;
        }
        else if (i >= size || j >= size)
        {
            cout << "index out of range" << endl;
        }
        else
        {
            list[i] = new Node(vertex[j], list[i]);
            list[j] = new Node(vertex[i], list[j]);
        }
    }

    friend ostream& operator << (ostream& ostream, const AdjacencyList<T>& adjacencyList)
    {
        for (int i = 0; i < adjacencyList.size; i++)
        {
            ostream << adjacencyList.vertex[i] << " : ";

            typename AdjacencyList<T>::Node* currentNode = adjacencyList.list[i];

            while (currentNode != nullptr)
            {
                ostream << currentNode->data << " ";

                currentNode = currentNode->next;
            }

            ostream << endl;
        }

        return ostream;
    }

    ~AdjacencyList()
    {
        for (int i = 0; i < SIZE; i++)
        {
            Node* deleteNode = list[i];
            Node* nextNode = list[i];

            if (deleteNode == nullptr)
            {
                continue;
            }
            else
            {
                while (nextNode != nullptr)
                {
                    nextNode = deleteNode->next;

                    delete deleteNode;

                    deleteNode = nextNode;
                }
            }
        }
    }
};

int main()
{
    AdjacencyList<char> adjacencyList;

    adjacencyList.push('A');
    adjacencyList.push('B');
    adjacencyList.push('C');

    adjacencyList.edge(0, 1);
    adjacencyList.edge(0, 2);

    cout << adjacencyList << endl;

    return 0;
}
