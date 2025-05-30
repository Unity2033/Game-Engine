#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	//	int array[5]; 
	//	
	//	int size = sizeof(array) / sizeof(int);
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		array[i] = (i + 1) * 10;
	//	
	//		printf("array[%d] = %d\n", i, array[i]);
	//	}

	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.

	// int list[5] = { 1, 2, 3, 4, 5 };
	// 
	// int * pointer = &list[0];
	// 
	// *pointer = 99;
	// 
	// printf("list[0]의 값 : %d\n", list[0]);
	// 
	// pointer = pointer + 1;
	// 
	// printf("pointer 변수의 값 : %p\n", pointer);
	// printf("list[1]의 주소 값 : %p\n", &list[1]);

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	// 공간을 가지게 됩니다.

	// float container[] = { 10.0f, 12.5f, 15.0f,17.5f };

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서 설정한
	// 요소에 따라 배열의 크기가 결정됩니다.
#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	// const char * word = "Game";
	// 
	// // word[0] = 'W';
	// 
	// printf("word의 문자열 : %s\n", word);

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 
	// 할 수 있으며, 문자열 상수는 데이터 영역에 읽기 전용 공간에
	// 저장되기 때문에 문자열의 값을 변경할 수 없습니다.

	// word = "League of Leg\0end";

	// printf("word의 문자열 : %s\n", word);

	// 문자열의 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
	// 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.

	// char name[ ] = "James";
	// 
	// printf("name 배열의 값 : %s\n\n", name);
	// 
	// name[0] = 'K';
	// 
	// printf("name 배열의 값 : %s\n", name);

	// name = "School";

	// 문자열을 저장하게 되면 맨 마지막에 무효의 문자까지 메모리
	// 공간에 저장됩니다.

#pragma endregion

#pragma region 2 차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	//	int array2D[3][3] =
	//	{
	//		{1,2,3},
	//		{4,5,6},
	//		{7,8,9},
	//	};
	//	
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("%d ", array2D[i][j]);
	//		}
	//	
	//		printf("\n");
	//	}

	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은
	// 열을 의미하고, 뒤에 있는 배열은 행을 의미합니다.
#pragma endregion
}