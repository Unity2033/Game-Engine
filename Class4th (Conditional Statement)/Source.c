#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	// 1이라는 값으로 나타내는 연산자입니다.

	// >  : 왼쪽의 값이 더 크다면
	// <  : 오른쪽의 값이 더 크다면

	// >= :	왼쪽의 값이 크거나 같다면
	// <= : 오른쪽의 값이 크거나 같다면

	// == : 값이 서로 같다면
	// != : 값이 서로 다르다면

	// int storage1 = 10 > 5;
	// int storage2 = 10 < 5;
	// int storage3 = 10 >= 5;
	// int storage4 = 10 <= 5;
	// int storage5 = 10 == 1;
	// int storage6 = 10 != 1;
	// 
	// printf("storage1 : %d\n", storage1);
	// 
	// printf("storage2 : %d\n", storage2);
	// 
	// printf("storage3 : %d\n", storage3);
	// 
	// printf("storage4 : %d\n", storage4);
	// 
	// printf("storage5 : %d\n", storage5);
	// 
	// printf("storage6 : %d\n", storage6);
#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면
	// 실행되는 조건문입니다.

	//	int level = 99;
	//	
	//	if (level == 99)
	//	{
	//		printf("전직 가능\n");
	//	}

	// if문은 조건이 1일 때 실행되며, 0일 때 실행
	// 되지 않습니다.
#pragma endregion

#pragma region else if문
	// if문에서 여러 개의 조건을 순차적으로 검사하고
	// 싶을 때 사용하는 조건문입니다.

	//	int second = 3600;
	//	
	//	if (second == 60)
	//	{
	//		printf("1 minute");
	//	}
	//	else if (second == 3600)
	//	{
	//		printf("1 hour");
	//	}

	// else if문의 경우 여러 개를 사용할 수 있으며, if문
	// 부터 위에서 하나씩 검사하다가 가장 먼저 조건이 맞는
	// 분기로 들어갑니다.
#pragma endregion

#pragma region else문
	// if문을 포함한 여러 조건문에서 모든 조건이 맞지 
	// 않을 때 실행되는 조건문입니다.
	//	
	//	int number = 0;
	//	
	//	if (number > 0)
	//	{
	//		printf("Posivite Number");
	//	}
	//	else if (number < 0)
	//	{
	//		printf("Negative Number");
	//	}
	//	else
	//	{
	//		printf("Interger");
	//	}

	// if문에 연결된 모든 조건문의 조건이 맞을 때 가장
	// 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region 논리 연산자
	// 두 개 이상의 조건을 결합하거나 하나의 조건을 
	// 반전시키는 연산자입니다.

#pragma region AND 연산자
// 두 개의 조건이 맞다면 실행되는 연산자입니다.

//	int score = 60;
//	int attendance = 80;
//	
//	if (score >= 60 && attendance >= 80)
//	{
//		printf("Granduate");
//	}

#pragma endregion

#pragma region OR 연산자
// 두 개의 조건 중 하나라도 맞다면 실행되는 연산자입니다.

//	int age = 20;
//	int weight = 75;
//	
//	if (age >= 18 || weight >= 80)
//	{
//		printf("자격 요건이 충족합니다.");
//	}
//	else
//	{
//		printf("자격 요건이 부족합니다.");
//	}

// 조건문의 논리 표현식을 평가하는 도중, 결과가 이미
// 확정났다면, 그 이후의 평가를 생략합니다.
#pragma endregion

#pragma region NOT 연산자
// 하나의 조건을 반전시키는 연산자입니다.

//	int power = 0;
//	
//	if (!power)
//	{
//		printf("The Power is on.");
//	}
//	else
//	{
//		printf("The Power is off.");
//	}

#pragma endregion


#pragma endregion

#pragma region 사분면

//	int x = 5;
//	int y = -4;
//	
//	if (x > 0 && y > 0)
//	{
//		printf("제 1 사분면");
//	}
//	else if (x < 0 && y > 0)
//	{
//		printf("제 2 사분면");
//	}
//	else if (x < 0 && y < 0)
//	{
//		printf("제 3 사분면");
//	}
//	else if (x > 0 && y < 0)
//	{
//		printf("제 4 사분면");
//	}
//	else if (x != 0 && y ==0)
//	{
//		printf("X 절편");
//	}
//	else if (x == 0 && y != 0)
//	{
//		printf("Y 절편");
//	}
//	else
//	{
//		printf("원점");
//	}

#pragma endregion

#pragma region switch문
// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

//	int state = 4;
//	
//	switch (state)
//	{
//	case 0 : printf("Idle State\n");
//		break;
//	case 1 : printf("Attack State\n");
//		break;
//	case 2 : printf("Die State\n");
//		break;
//	default: printf("Exception\n");
//		break;
//	}

// switch문에는 조건식으로 실수형 변수와 실수형 상수를
// 선언할 수 없습니다.
#pragma endregion

#pragma endregion
}