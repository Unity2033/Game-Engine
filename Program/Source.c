#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	//int data = 10;

	//printf("data 변수의 주소 : %p\n", &data);

	// 데이터의 주소 값은 해당 데이터가 저장된 메모리의
	// 시작 주소를 의미합니다.
#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다.

	// int x = 0;
	// 
	// printf("x 변수의 값을 입력 : ");
	// 
	// // 표준 입력 함수는 입력을 수행할 때까지 다음
	// // 작업으로 넘어갈 수 없습니다.
	// 
	// scanf_s("%d", &x);
	// 
	// // 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// // 형식 지정자에 따라 입력할 수 있는 데이터의 범위도
	// // 결정됩니다.
	// 
	// printf("x의 변수의 값 : %d\n", x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 
	// 데이터를 보관하였다가 입력하는 순간 버퍼 안의
	// 내용을 프로그램에 전송합니다.
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	int packet = 10;

	int * pointer = &packet;

	printf("packet의 주소 : %p\n", &packet);
	printf("pointer의 값 : %p\n", pointer);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 시작 주소를 저장하게 되면 
	// 해당 변수의 시작 주소를 가리키게 됩니다.
#pragma endregion


}