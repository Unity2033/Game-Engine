#include <stdio.h>

void main()
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ������
	// �����ϵ��� �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ�
	// 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	// >  : ������ ���� �� ũ�ٸ�
	// <  : �������� ���� �� ũ�ٸ�

	// >= :	������ ���� ũ�ų� ���ٸ�
	// <= : �������� ���� ũ�ų� ���ٸ�

	// == : ���� ���� ���ٸ�
	// != : ���� ���� �ٸ��ٸ�

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

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ�
	// ����Ǵ� ���ǹ��Դϴ�.

	//	int level = 99;
	//	
	//	if (level == 99)
	//	{
	//		printf("���� ����\n");
	//	}

	// if���� ������ 1�� �� ����Ǹ�, 0�� �� ����
	// ���� �ʽ��ϴ�.
#pragma endregion

#pragma region else if��
	// if������ ���� ���� ������ ���������� �˻��ϰ�
	// ���� �� ����ϴ� ���ǹ��Դϴ�.

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

	// else if���� ��� ���� ���� ����� �� ������, if��
	// ���� ������ �ϳ��� �˻��ϴٰ� ���� ���� ������ �´�
	// �б�� ���ϴ�.
#pragma endregion

#pragma region else��
	// if���� ������ ���� ���ǹ����� ��� ������ ���� 
	// ���� �� ����Ǵ� ���ǹ��Դϴ�.
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

	// if���� ����� ��� ���ǹ��� ������ ���� �� ����
	// ���� �ִ� ���ǹ��� ����˴ϴ�.
#pragma endregion

#pragma region �� ������
	// �� �� �̻��� ������ �����ϰų� �ϳ��� ������ 
	// ������Ű�� �������Դϴ�.

#pragma region AND ������
// �� ���� ������ �´ٸ� ����Ǵ� �������Դϴ�.

//	int score = 60;
//	int attendance = 80;
//	
//	if (score >= 60 && attendance >= 80)
//	{
//		printf("Granduate");
//	}

#pragma endregion

#pragma region OR ������
// �� ���� ���� �� �ϳ��� �´ٸ� ����Ǵ� �������Դϴ�.

//	int age = 20;
//	int weight = 75;
//	
//	if (age >= 18 || weight >= 80)
//	{
//		printf("�ڰ� ����� �����մϴ�.");
//	}
//	else
//	{
//		printf("�ڰ� ����� �����մϴ�.");
//	}

// ���ǹ��� �� ǥ������ ���ϴ� ����, ����� �̹�
// Ȯ�����ٸ�, �� ������ �򰡸� �����մϴ�.
#pragma endregion

#pragma region NOT ������
// �ϳ��� ������ ������Ű�� �������Դϴ�.

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

#pragma region ��и�

//	int x = 5;
//	int y = -4;
//	
//	if (x > 0 && y > 0)
//	{
//		printf("�� 1 ��и�");
//	}
//	else if (x < 0 && y > 0)
//	{
//		printf("�� 2 ��и�");
//	}
//	else if (x < 0 && y < 0)
//	{
//		printf("�� 3 ��и�");
//	}
//	else if (x > 0 && y < 0)
//	{
//		printf("�� 4 ��и�");
//	}
//	else if (x != 0 && y ==0)
//	{
//		printf("X ����");
//	}
//	else if (x == 0 && y != 0)
//	{
//		printf("Y ����");
//	}
//	else
//	{
//		printf("����");
//	}

#pragma endregion

#pragma region switch��
// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.

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

// switch������ ���ǽ����� �Ǽ��� ������ �Ǽ��� �����
// ������ �� �����ϴ�.
#pragma endregion

#pragma endregion
}