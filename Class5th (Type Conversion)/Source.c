#include <stdio.h>
#include "../Program/Library.h"

#define SIZE 10

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이
	// 이루어질 때 기존에 저장했던 자료형을 다른 자료형
	// 으로 변환하는 과정입니다.

#pragma region 암묵적 형 변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가
	// 큰 자료형으로 변환되는 과정입니다.

	// int integer = 100;
	// float decimal = 36.5f;
	// 
	// printf("char 자료형의 크기 : %u\n", sizeof(integer + decimal));

	// 표현 범위가 작은 데이터에 표현 범위가 큰 데이터를 저장하게
	// 되면 암묵적으로 데이터 손실이 발생합니다.
#pragma endregion

#pragma region 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을 
	// 변환하는 과정입니다.

	// int x = 10;
	// int y = 3;
	// 
	// float position = (float)x / y;
	// 
	// printf("position 변수의 값 : %f\n", position);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과
	// 값만 가질 수 있습니다.
#pragma endregion

#pragma endregion

#pragma region 전처리기
	// 프로그램이 컴파일되기 이전에 프로그램에 대한 
	// 사전 처리하는 과정입니다.

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의
	// 되고 처리되는 과정입니다.

	// printf("SIZE의 값 : %d\n", SIZE);

	// 매크로의 경우 자료형이 존재하지 않으므로, 메모리
	// 공간을 가지고 있지 않습니다.

	// SIZE = 30;

	// 매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가
	// 실행될 때 매크로의 대체 목록을 넣어야 하므로 프로그램
	// 의 크기가 커지게 됩니다.
#pragma endregion

	// printf("channel 변수의 값 : %d\n", channel);

	// 전처리기는 컴파일러가 아닌 선행처리기에 의해
	// 처리되는 문장이기 때문에 명령문 끝에 ";"을 
	// 사용하지 않습니다.
#pragma endregion
}