#include <iostream>

using namespace std;

template <typename T>
class AdjacencyMatrix
{
private:
    int size; // 정점의 개수
    int capacity; // 최대 용량

    int** matrix; // 인접 행렬
    int matrixCount; // 인접 행렬의 크기

    T * vertex; // 정점의 집합

public:
    AdjacencyMatrix()
    {
        size = 0;
        capacity = 0;
        vertex = nullptr;
    }

    void push(T data)
    {
        if (capacity <= 0)
        {
            resize(1);
        }
        else if (size >= capacity)
        {
            resize(capacity * 2);
        }

        vertex[size++] = data;
    }


    void resize(int newSize)
    {
        // 1. capacity에 새로운 size 값을 저정합니다.
        capacity = newSize;

        // 2. 새로운 포인터 변수를 생성해서 새롭게 만들어진
        //    메모리 공간을 가리키도록 합니다.
        T* pointer = new T[capacity];

        // 3. 새로운 메모리 공간의 값을 초기화합니다.
        for (int i = 0; i < capacity; i++)
        {
            pointer[i] = NULL;
        }

        // 4. 기존 배열에 있는 값을 복사해서 새로운
        //    배열에 넣어줍니다.
        for (int i = 0; i < size; i++)
        {
            pointer[i] = vertex[i];
        }

        // 5. 기존 배열의 메모리를 해제합니다.
        if (vertex != nullptr)
        {
            delete[] vertex;
        }

        // 6. 기존에 배열을 가리키던 포인터 변수의 값을
        //    새로운 배열의 시작 주소로 가리킵니다.
        vertex = pointer;
    }

    void resize()
    {
        int** newMatrix = new int* [size];

        for (int i = 0; i < size; i++)
        {
            newMatrix = new int[size] {0};
        }

        for (int i = 0; i < matrixCount; i++)
        {
            for (int j = 0; j < matrixCount; j++)
            {
                newMatrix[i][j] = matrix[i][j];
            }
        }

        if (matrix != nullptr)
        {
            for (int i = 0; i < matrixCount; i++)
            {
                delete[] matrix[i];
            }

            delete[] matrix;
        }

        matrix = newMatrix;

        matrixCount = size;
    }

    void edge(int i, int j)
    {
        if (size <= 0)
        {
            cout << "adjancency matrix is empty" << endl;
        }
        else if (i >= size || j >= size)
        {
            cout << "index out of range" << endl;
        }
        else
        {
            if (matrix == nullptr)
            {
                matrixCount = size;

                matrix = new int * [size];

                for (int i = 0; i < size; i++)
                {
                    matrix[i] = new int[size];
                }

                for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j < size; j++)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
            else if (matrixCount < size)
            {
                resize();
            }
        }
    }
};

int main()
{
    AdjacencyMatrix<int> adjacencyMatrix;

    adjacencyMatrix.push(5);
    adjacencyMatrix.push(7);
    adjacencyMatrix.push(12);

    adjacencyMatrix.edge(5, 10);

    return 0;
}
