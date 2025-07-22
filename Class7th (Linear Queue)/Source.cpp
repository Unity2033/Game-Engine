﻿#include <iostream>

#define SIZE 5

using namespace std;

template <typename T>
class Queue
{
private:
    int rear;
    int front;

    T container[SIZE];
public:
    Queue()
    {
        rear = 0;
        front = 0;

        for (int i = 0; i < SIZE; i++)
        {
            container[i] = NULL;
        }
    }

    void push(T data)
    {
        if (rear >= SIZE)
        {
            cout << "linear queue is overflow" << endl;
        }
        else
        {
            container[rear++] = data;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << "linear queue is empty" << endl;
        }
        else
        {
            container[front++] = NULL;
        }
    }

    bool empty()
    {
        return front == rear;
    }

    const T & Front()
    {
        if (empty())
        {
            exit(1);
        }
        else
        {
            return container[front];
        }
    }

    const int& size()
    {
        return rear - front;
    }

};

int main()
{
    Queue<int> queue;

    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);

    cout << "linear queue is size : " << queue.size() << endl;

    while (queue.empty() == false)
    {
        cout << queue.Front() << endl;

        queue.pop();
    }

    queue.push(1);

    return 0;
}
