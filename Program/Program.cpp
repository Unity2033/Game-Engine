﻿#include <iostream>

using namespace std;

#define SIZE 10

template <typename T>
class AdjancencyMatrix
{
private:
	int size;			    // 정점의 개수
	T vertex[SIZE];			// 정점의 집합
	int matrix[SIZE][SIZE];	// 인접 행렬
public:
	AdjancencyMatrix()
	{
		size = 0;

		for (int i = 0; i < SIZE; i++)
		{
			vertex[i] = NULL;

			for (int j = 0; j < SIZE; j++)
			{
				matrix[i][j] = NULL;
			}
		}
	}


};


int main()
{

	return 0;
}
