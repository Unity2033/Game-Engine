#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를 할당하는
	// 작업입니다.

	// int * pointer = malloc(sizeof(int));
	// 
	// *pointer = 10;
	// 
	// printf("pointer가 가리키는 값 : %d\n", *pointer);

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경시킬 수 있으며, 동적으로 메모리의 크기를 할당할 
	// 때 바이트 단위로 지정합니다.

	// free(pointer);

	// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로
	// 사용이 끝나면 직접 해제해주어야 합니다.

	//	pointer = malloc(sizeof(int) * 3);
	//	
	//	for (int i = 0; i < 3; i++)
	//	{
	//		pointer[i] = (i + 1) * 10;
	//	
	//		printf("pointer[%d] = %d\n", i, pointer[i]);
	//	}
	//	
	//	free(pointer);

#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	// int * reference = malloc(sizeof(int));
	// 
	// *reference = 10;
	// 
	// printf("reference 변수의 가리키는 값 : %d\n", *reference);
	// 
	// free(reference);
	// 
	// printf("reference 변수의 가리키는 값 : %d\n", *reference);

#pragma endregion

	return 0;
}