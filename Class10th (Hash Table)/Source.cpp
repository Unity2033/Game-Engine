#include <iostream>

#define SIZE 6

using namespace std;

template<typename KEY, typename VALUE>
class HashTable
{
private:
    struct Node
    {
        KEY key;
        VALUE value;

        Node* next;
    };

    struct Bucket
    {
        int count;
        Node* head;
    };

    Bucket bucket[SIZE];
public:
    HashTable()
    {
        for (int i = 0; i < SIZE; i++)
        {
            bucket[i].count = 0;
            bucket[i].head = nullptr;
        }
    }

    Node* create_node(KEY key, VALUE value)
    {
        Node* newNode = new Node;

        newNode->key = key;
        newNode->value = value;
        newNode->next = nullptr;

        return newNode;
    }

    template <typename T>
    const unsigned int& hash_function(T key)
    {
        unsigned int hashIndex = (unsigned int)key % SIZE;

        return hashIndex;
    }

    void insert(KEY key, VALUE value)
    {
        // 해시 함수를 통해서 값을 받는 임시 변수
        int hashIndex = hash_function(key);

        // 새로운 노드를 생성합니다.
        Node* newNode = create_node(key, value);

        // 노드가 1개라도 존재하지 않는다면
        if (bucket[hashIndex].count == 0)
        {
            // bucket[hashIndex]의 head 포인터가 newNode를 가리키게 합니다.
            bucket[hashIndex].head = newNode;
        }
        else
        {
            newNode->next = bucket[hashIndex].head;

            bucket[hashIndex].head = newNode;
        }

        // bucket[hashIndex]의 count를 증가합니다.
        bucket[hashIndex].count++;
    }

    void erase(KEY key)
    {
        // 1. 해시 함수를 통해서 값을 받는 임시 변수
        int hashIndex = hash_function(key);

        // 2. Node를 탐색할 수 있는 포인터 변수 선언
        Node* currentNode = bucket[hashIndex].head;

        // 3. 이전 Node를 저장할 수 있는 포인터 변수 선언
        Node* previouseNode = nullptr;

        // 4. currentNode가 nullptr과 같다면 함수를 종료합니다.
        if (currentNode == nullptr)
        {
            cout << "not key found" << endl;

            return;
        }
        else
        {
            // 5. currentNode를 이용해서 내가 찾고자 하는 key 값을 찾습니다.
            while (currentNode != nullptr)
            {
                if (currentNode->key == key)
                {
                    if (currentNode == bucket[hashIndex].head)
                    {
                        bucket[hashIndex].head = currentNode->next;
                    }
                    else
                    {
                        previouseNode->next = currentNode->next;
                    }

                    bucket[hashIndex].count--;

                    delete currentNode;

                    return;
                }
                else
                {
                    previouseNode = currentNode;

                    currentNode = currentNode->next;
                }
            }

            cout << "not key found" << endl;
        }


    }

    ~HashTable()
    {
        for (int i = 0; i < SIZE; i++)
        {
            Node* deleteNode = bucket[i].head;
            Node* nextNode = bucket[i].head;

            if (bucket[i].head == nullptr)
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
    HashTable<const char*, int> hashtable;

    hashtable.insert("Abyssal Mask", 3000);
    hashtable.insert("Bami’s Cinder", 1000);
    hashtable.insert("Chain Vest", 800);

    hashtable.erase("Abyssal");
    hashtable.erase("Bami’s Cinder");

    return 0;
}
