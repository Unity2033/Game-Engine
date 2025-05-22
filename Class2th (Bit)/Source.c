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

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면 1을
	// 반환하는 연산자입니다.

	// int x3 = 3; // 0000 0011
	// int y3 = 8; // 0000 1000
	//             // ---------
	//             // 0000 1011
	// 
	// printf("x3 ^ y3 : %d\n", x3 ^ y3);

#pragma endregion

#pragma region NOT 연산자
	// 비트를 반전시키는 연산자입니다.

	// char packet = 14; // 0000 1110

	// printf("~packet : %d\n", ~packet);

	// 비트의 경우 가장 앞에 있는 비트는 부호를 나타내며,
	// 1이 있다면 값은 음수가 됩니다.
#pragma endregion

#pragma region 시프트 연산자
	// 값의 모든 비트를 지정한 수만큼 특정한 위치로
	// 이동시키는 연산자입니다.

	// char data = 10; // 0000 1010
	// 
	// printf("data << 2 : %d\n", data << 2);
	// 
	// printf("data >> 2 : %d\n", data >> 2);

#pragma endregion

#pragma endregion

#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.

	// char byte = 129; // 0111 1111

	// printf("byte 변수의 값 : %d\n", byte);

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력됩니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서
	// 연산을 수행하는 과정입니다. 

	// char byte = -129;

	// printf("byte 변수의 값 : %d\n", byte);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력합니다.
#pragma endregion

#pragma region 부호 없는 자료형
// 정수 값을 저장할 수 있는 자료형 중에서, 부호 비트
// 없이 양의 정수와 0만을 표현할 수 있는 자료형입니다.

// unsigned int experience = -1;
// 
// printf("experience 변수의 값 : %u\n", experience);
// 
// experience = 4294967295;
// 
// printf("experience 변수의 값 : %d\n", experience);

// 실수는 IEEE 754 구조가 부호 비트를 포함하고 있으므로,
// 부호 없이 사용할 수 없습니다.
#pragma endregion

#pragma region 실수를 저장하는 방법

#pragma region 고정 소수점
// 소수점의 위치를 고정하여 소수점의 위치를 나타내는 방법입니다.

// 고정 소수점은 정수부와 소수부의 크기가 작으므로 표현할 수 있는 
// 범위가 한정되어 있습니다.
#pragma endregion

#pragma region 부동 소수점
// 소수점의 위치를 고정하지 않고, 소수점의 위치를
// 나타내는 방법입니다.

// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는
// 표현하지 않습니다.
#pragma endregion

	double attack = 0.3;

	printf("attack 변수의 값 : %.6f\n", attack);

#pragma endregion

	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion
}