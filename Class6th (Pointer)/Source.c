#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	//int data = 10;

	//printf("data ������ �ּ� : %p\n", &data);

	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸���
	// ���� �ּҸ� �ǹ��մϴ�.
#pragma endregion

#pragma region scanf_s �Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ���
	// ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.

	// int x = 0;
	// 
	// printf("x ������ ���� �Է� : ");
	// 
	// // ǥ�� �Է� �Լ��� �Է��� ������ ������ ����
	// // �۾����� �Ѿ �� �����ϴ�.
	// 
	// scanf_s("%d", &x);
	// 
	// // ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// // ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������
	// // �����˴ϴ�.
	// 
	// printf("x�� ������ �� : %d\n", x);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ� 
	// �����͸� �����Ͽ��ٰ� �Է��ϴ� ���� ���� ����
	// ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.

	//	int packet = 10;
	//	int storage = 20;
	//	
	//	int * pointer = &packet;
	//	
	//	printf("packet�� �ּ� : %p\n", &packet);
	//	printf("pointer�� �� : %p\n\n", pointer);
	//	
	//	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	//	// ������ ������ ������ ���� �ּҸ� �����ϰ� �Ǹ� 
	//	// �ش� ������ ���� �ּҸ� ����Ű�� �˴ϴ�.
	//	
	//	*pointer = 99;
	//	
	//	printf("packet ������ �� : %d\n", packet);
	//	printf("pointer�� ����Ű�� �� : %d\n\n", *pointer);
	//	
	//	// ������ ������ �����Ͱ� ����Ű�� �޸� ������ �ڷ�����
	//	// �� �� �����Ƿ�, �����Ͱ� ����Ű�� �޸��� �ڷ����� 
	//	// �������־�� �մϴ�.
	//	
	//	pointer = &storage;
	//	
	//	printf("storage�� �ּ� : %p\n", &storage);
	//	printf("pointer�� �� : %p\n\n", pointer);
	//	
	//	printf("pointer ������ ũ�� : %u\n", sizeof(pointer));

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� �� 
	// �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ��� �
	// ü���� ���� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

#pragma region ��� ���� ������
	// �����Ͱ� ����Ű�� �ּҿ� ����Ǿ� �ִ� ���� ������ ��
	// ������ �����Ǿ� �ִ� �������Դϴ�.

	// int height = 10;
	// int width = 20;
	// 
	// const int * constPointer = &height;
	// 
	// // *constPointer = 33;
	// 
	// printf("constPointer�� �� : %p\n", constPointer);
	// printf("constPointer�� ����Ű�� �� : %d\n\n", *constPointer);
	// 
	// constPointer = &width;
	// 
	// printf("constPointer�� �� : %p\n", constPointer);
	// printf("constPointer�� ����Ű�� �� : %d\n", *constPointer);

#pragma endregion

#pragma region ������ ���
	// ������ ������ ����Ű�� �ִ� �ּ� ���� ������ 
	// �� ������ �����Ǿ� �ִ� �������Դϴ�.

	// int protine = 10;
	// int fat = 20;
	// 
	// int * const reference = &protine;	   
	// 
	// printf("reference�� �� : %p\n", reference);
	// printf("reference�� ����Ű�� �� : %d\n\n", *reference);
	// 
	// *reference = 99;
	// 
	// printf("protine�� �ּ� : %p\n", &protine);
	// printf("reference�� ����Ű�� �� : %d\n", *reference);

	//reference = &fat;

#pragma endregion

#pragma region ���� ������
// �ڷ����� �������� ���� ���·� ��� �ڷ�����
// ������ �� �ִ� �������Դϴ�.

// char character = 'A';
// int integer = 10;
// float decimal = 36.5f;
// 
// void * pointer = &character;
// 
// *(char*)pointer = 'B';
// 
// pointer = &integer;
// 
// *(int*)pointer = 20;
// 
// pointer = &decimal;
// 
// *(float*)pointer = 7.5f;
// 
// printf("character ������ �� : %c\n", character);
// printf("integer ������ �� : %d\n", integer);
// printf("decimal ������ �� : %f\n", decimal);

// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ ��
// �����Ƿ�, ���� �����Ͱ� ����Ű�� ������ �ڷ������� 
// ��ȯ���־�� �մϴ�.
#pragma endregion
}