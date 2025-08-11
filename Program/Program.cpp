#include <iostream>

using namespace std;

void merge_sort(int list[], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;

		merge_sort(list, start, middle);
		merge_sort(list, middle + 1, end);
	}
}

int main()
{
#pragma region 병합 정렬
	// 하나의 리스트를 두 개의 균일한 크기로 분할하고 분할된
	// 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
	// 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

	// 1. 리스트의 길이가 0 또는 1이 되면 이미 정렬된 것으로 봅니다.

	// 2. 그렇지 않은 경우

	// 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의
	//      두 부분 리스트로 나눕니다.

	// 2-2. 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬합니다.

	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.

	int list[] = { 3,5,2,7,4,1,8,6 };

	int size = sizeof(list) / sizeof(list[0]);

	merge_sort(list, 0, size - 1);



#pragma endregion



	return 0;
}
