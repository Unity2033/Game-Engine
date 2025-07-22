#include <iostream>

#define SIZE 5

using namespace std;

template<typename T>
class Stack
{
private:
    int count;
    int highset;
    T container[SIZE];
public:
    Stack()
    {
        count = 0;
        highset = -1;

        for (int i = 0; i < SIZE; i++)
        {
            container[i] = NULL;
        }
    }

    void push(T data)
    {
        if (highset >= SIZE - 1)
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            container[++highset] = data;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            highset--;
        }
    }

    bool empty()
    {
        return (highset <= -1);
    }

    const int& size()
    {
        count = highset + 1;

        return count;
    }

    const T & top()
    {
        return container[highset];
    }
};

int main()
{
    Stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    while (stack.empty() == false)
    {
        cout << stack.top() << endl;

        stack.pop();
    }

    cout << stack.empty() << endl;

    return 0;
}
