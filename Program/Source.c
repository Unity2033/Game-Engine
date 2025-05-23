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


#pragma endregion


}