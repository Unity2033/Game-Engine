#include <stdio.h>

void main()
{
#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로
	// 정렬합니다.

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2 진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	// 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.

#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.

	// int x1 = 10; // 0000 1010
	// int y1 = 6;  // 0000 0110
	// 
	// printf("x1 & y1 : %d\n", x1 & y1);
#pragma endregion

#pragma region OR 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자입니다.

	// int x2 = 8;  // 0000 1000
	// int y2 = 12; // 0000 1100
	//              // ---------
	//              // 0000 1100
	// 
	// printf("x2 | y2 : %d\n", x2 | y2);
#pragma endregion


#pragma endregion



	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion


}