#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ�
	// �۾��Դϴ�.

	// int * pointer = malloc(sizeof(int));
	// 
	// *pointer = 10;
	// 
	// printf("pointer�� ����Ű�� �� : %d\n", *pointer);

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦
	// �����ų �� ������, �������� �޸��� ũ�⸦ �Ҵ��� 
	// �� ����Ʈ ������ �����մϴ�.

	// free(pointer);

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	// ����� ������ ���� �������־�� �մϴ�.

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

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// int * reference = malloc(sizeof(int));
	// 
	// *reference = 10;
	// 
	// printf("reference ������ ����Ű�� �� : %d\n", *reference);
	// 
	// free(reference);
	// 
	// printf("reference ������ ����Ű�� �� : %d\n", *reference);

#pragma endregion

	return 0;
}