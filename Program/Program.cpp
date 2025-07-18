#include <iostream>

using namespace std;

class String
{
private:
    int size;
    char * pointer;

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

            delete [ ] pointer;

            pointer = container;
        }
    }
};

int main()
{
    String message;

    message = "League of Legend";

    message = "Adidas";
    
    return 0;
}
