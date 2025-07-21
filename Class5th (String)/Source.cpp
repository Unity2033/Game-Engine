#include <iostream>

using namespace std;

class String
{
private:
    int size;
    char* pointer;

public:
    String()
    {
        size = 0;
        pointer = nullptr;
    }

    void operator = (const char* word)
    {
        size = strlen(word) + 1;

        if (pointer == nullptr)
        {
            pointer = new char[size];

            for (int i = 0; i < size; i++)
            {
                pointer[i] = word[i];
            }
        }
        else
        {
            char* container = new char[size];

            for (int i = 0; i < size; i++)
            {
                container[i] = word[i];
            }

            delete[] pointer;

            pointer = container;
        }
    }

    void append(const char* word)
    {
        int previousSize = size;

        size = size + strlen(word) + 1;

        char* container = new char[size];

        for (int i = 0; i < previousSize; i++)
        {
            container[i] = pointer[i];
        }

        for (int i = 0; i < strlen(word) + 1; i++)
        {
            container[previousSize + i] = word[i];
        }

        delete[] pointer;

        pointer = container;
    }

    unsigned long long find(const char* word)
    {
        int length = size - strlen(word);

        int i = 0;
        int j = 0;

        for (i = 0; i < length; i++)
        {
            for (j = 0; j < strlen(word); j++)
            {
                if (pointer[i + j] != word[j])
                {
                    break;
                }
            }

            if (j == strlen(word))
            {
                return i;
            }
        }

        return 18446744073709551615;
    }

    const int& length()
    {
        return size - 1;
    }

    const char& operator [] (const int& index)
    {
        return pointer[index];
    }

    ~String()
    {
        if (pointer != nullptr)
        {
            delete[] pointer;
        }
    }
};

int main()
{
    String message;

    message = "League of Legend";

    for (int i = 0; i < message.length(); i++)
    {
        cout << message[i];
    }

    cout << endl;

    message = "Adidas";

    message.append(" Shoes");

    for (int i = 0; i < message.length(); i++)
    {
        cout << message[i];
    }

    cout << endl;

    cout << message.find("Dark") << endl;

    return 0;
}
