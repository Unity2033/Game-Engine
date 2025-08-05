#include <iostream>

using namespace std;

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘입니다.

	int list[] = { 5,3,1,4,10,7,2 };

	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < (size - i) - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
#pragma endregion

	return 0;
}
