#include <stdio.h>

void main()
{
#pragma region �ڷ���
	// �����͸� �����ϱ� ���� �������� ���¸� �����ִ� ���Դϴ�.

	// �ڷ����� ������ �ڷ������� ũ�Ⱑ ������ ������
	// �ڷ����� ũ��� ����Ʈ ������ �̷�����ϴ�.

	// �ڷ����� ��� �ڷ����� ���� ������ �� �ִ�
	// ������ ������ �����˴ϴ�.
#pragma endregion

#pragma region ����
	// �����͸� ������ �� �ִ� �޸� ������
	// �����ϴ� ���Դϴ�.

	// char alphabet = 'A';
	// 
	// int integer = 100;
	// 
	// float decimal = 36.5f;
	// 		
	// printf("alphabet ������ �� : %c\n", alphabet);
	// printf("integer ������ �� : %d\n", integer);
	// printf("decimal ������ �� : %f\n", decimal);

	// ������ ���α׷��� ����Ǵ� ���� ���� �ٲ� �� ������,
	// ���� ����Ǿ� �ִ� ���� ���� ����� ���� ���� �������ϴ�.

	// alphabet = 'B';
	// integer = 200;
	// decimal = 7.5f;
	// 
	// printf("alphabet ������ �� : %c\n", alphabet);
	// printf("integer ������ �� : %d\n", integer);
	// printf("decimal ������ �� : %f\n", decimal);

	// ������ �޸� ������ ���α׷��� ����� ������ �ٲ�ϴ�.
#pragma endregion

#pragma region ������ �̸� ��Ģ

	// 1. ������ �̸��� �빮�ڿ� �ҹ��ڸ� �����Ͽ� ����� �� �ֽ��ϴ�.

	// ex) int score = 100;
	// ex) int SCORE = 50;

	// 2. ������ �̸����� ���� ����� �� �����ϴ�.

	// ex) int int = 10;

	// 3. ������ �̸��� ������ ���Ե� �� �����ϴ�.

	// ex) int x value = 30;

	// 4. ������ �̸����� Ư�� ��ȣ�� "_"�� "$"�� ����� �� �ֽ��ϴ�.

	// ex) int x_value = 20;

	// 5. ������ �̸��� ���ڷ� ������ �� �����ϴ�.

	// ex) int 5day = 5;
	// ex) int minute1 = 30;

#pragma endregion

#pragma region ���
	// ���α׷� ���� �߿� �� �̻� ���� ������� �ʴ� �޸��Դϴ�.

	// const float pi = 3.141592f;

	// pi = 6.235f;

	// ����� ��� �޸� ������ ������ ���� ���� ����� ���ͷ� ������ �ϸ�,
	// �޸� ������ ������ �ִ� ����� �ɺ��� ������ �մϴ�.
#pragma endregion

#pragma region ��� ������

	// 1. ���� = ���� + ���ͷ� ���
	// 2. ���� = ���ͷ� ��� - �ɺ��� ���
	// 3. ���� = ���� * �ɺ��� ���
	// 4. ���� = ���� / ���ͷ� ��� 
	// 5. ���� = ���ͷ� ��� % ���ͷ� ���

	int x = 10;
	int y = 5;
	int z = 1;

	const int constant = 5;

	int storage1 = x + 5;
	int storage2 = 10 - constant;
	int storage3 = y * constant;
	int storage4 = z / 1;
	int storage5 = 10 % 10;

	printf("storage1 ������ �� : %d\n", storage1);
	printf("storage2 ������ �� : %d\n", storage2);
	printf("storage3 ������ �� : %d\n", storage3);
	printf("storage4 ������ �� : %d\n", storage4);
	printf("storage5 ������ �� : %d\n", storage5);

#pragma endregion
}