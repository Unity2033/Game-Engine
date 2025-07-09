#include <iostream>

using namespace std;

template <typename T>
class List
{
private:    
    struct Node
    {
        T data;
        Node * nextNode;
        Node * previouseNode;
    };
    
    int size;
    Node* head;
    Node* tail;
public:
    List()
    {
        size = 0;
        head = nullptr;
        tail = nullptr;
    }
};

int main()
{

    return 0;
}
