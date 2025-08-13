#include <iostream>

using namespace std;

int fibonacci(int n, int list[])
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n <= 2)
	{
		return 1;
	}

	if (list[n] != 0)
	{
		return list[n];
	}

	return list[n] = fibonacci(n - 1, list) + fibonacci(n - 2, list);
}

int main()
{
#pragma region 동적 계획법
	// 특정 범위까지의 값을 구하기 위해 그것과 다른 범위 
	// 까지의 값을 이용하여 효율적으로 값을 구하는 알고리즘입니다.

	// 겹치는 부분 문제 (Overlapping Subproblems) 
	// 동일한 작은 문제들이 반복하여 나타나는 경우를 의미합니다.

	// 최적 부분 구조 (Optimal Substructure) 
	// 부분 문제의 최적 결과 값을 사용하여 전체 문제의 최적의
	// 결과를 낼 수 있는 경우를 의미합니다.

	// 메모이제이션 (Memoization)
	// 프로그램이 동일한 계산을 반복해야 할 때, 이전에 계산한 값을
	// 메모리에 저장함으로써 동일한 계산을 반복 수행하는 작업을 
	// 제거하여 프로그램이 실행 속도를 향상시키는 방법입니다.

	int n = 50;

	int* list = new int[n + 1] {0};

	cout << fibonacci(n, list) << endl;

	delete[] list;

#pragma endregion

	return 0;
}
