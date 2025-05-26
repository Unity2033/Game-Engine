#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 
	// 수행하는 명령문입니다.

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다.

#pragma region 전위 증감 연산자
	// 변수의 값을 증감시킨 후에 연산을 수행하는 연산자입니다.

	//	int protine = 0;
	//	
	//	int calorie = ++protine;
	//	
	//	printf("protine 변수의 값 : %d\n", protine);
	//	printf("calorie 변수의 값 : %d\n", calorie);
	//	
	//	calorie = --protine;
	//	
	//	printf("protine 변수의 값 : %d\n", protine);
	//	printf("calorie 변수의 값 : %d\n", calorie);

#pragma endregion

#pragma region 후위 증감 연산자
	// 연산을 수행한 다음 변수의 값을 증감시키는 연산자입니다.

	// int x = 0;
	// int position = x++;
	// 
	// printf("position : %d\n", position);
	// printf("x: %d\n", x);
	// 
	// position = x--;
	// 
	// printf("position : %d\n", position);
	// printf("x : %d\n", x);

#pragma endregion

#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 수만큼 반복하는 반복문입니다.

	//	for (int i = 0; i < 5; i++)
	//	{
	//		printf("Execute...\n");
	//	}

	// 반복문이 동작하는 순서는 "초기화 -> 조건 검사 -> 실행
	// -> 증감의 구조"로 동작합니다.
#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진
	// 명령문을 실행하는 반복문입니다.

	//	int count = 0;
	//	
	//	while (count < 5)
	//	{
	//		printf("count : %d\n", count);
	//	
	//		count++;
	//	}

	// 반복문을 순차적으로 실행하면서 조건 분기를 만나게 되면
	// 어느 쪽으로 실행 흐름이 갈 지 미리 예측입니다.
#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	// 조건에 따라 명령문을 실행하는 반복문입니다.

	//	int connect = 0;
	//	
	//	do
	//	{
	//		printf("Access");
	//	} while (connect > 3);

	// 반복문의 경우 미리 예측해서 실행하는 구조를 가지며,
	// 예측이 틀렸다면 현재 반복문 내의 조건 분기만 다시
	// 검사하여 처리합니다.
#pragma endregion

#pragma region nested for문

	//	for (int i = 0; i < 3; i++)
	//	{
	//		printf("i의 값 : %d\n\n", i);
	//	
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("j의 값 : %d\n", j);
	//		}
	//	
	//		printf("\n");
	//	}

#pragma endregion

#pragma region continue문
// 해당 조건문만 실행하지 않고, 반복문은 이어서
// 실행하는 제어문입니다.

//	for (int i = 1; i <= 10; i++)
//	{
//		if (i % 3 == 0)
//		{
//			continue;
//		}
//	
//		printf("%d ", i);
//	}
#pragma endregion

#pragma endregion
}