#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ������� 
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� �������Դϴ�.

#pragma region ���� ���� ������
	// ������ ���� ������Ų �Ŀ� ������ �����ϴ� �������Դϴ�.

	//	int protine = 0;
	//	
	//	int calorie = ++protine;
	//	
	//	printf("protine ������ �� : %d\n", protine);
	//	printf("calorie ������ �� : %d\n", calorie);
	//	
	//	calorie = --protine;
	//	
	//	printf("protine ������ �� : %d\n", protine);
	//	printf("calorie ������ �� : %d\n", calorie);

#pragma endregion

#pragma region ���� ���� ������
	// ������ ������ ���� ������ ���� ������Ű�� �������Դϴ�.

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

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	//	for (int i = 0; i < 5; i++)
	//	{
	//		printf("Execute...\n");
	//	}

	// �ݺ����� �����ϴ� ������ "�ʱ�ȭ -> ���� �˻� -> ����
	// -> ������ ����"�� �����մϴ�.
#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	int count = 0;
	//	
	//	while (count < 5)
	//	{
	//		printf("count : %d\n", count);
	//	
	//		count++;
	//	}

	// �ݺ����� ���������� �����ϸ鼭 ���� �б⸦ ������ �Ǹ�
	// ��� ������ ���� �帧�� �� �� �̸� �����Դϴ�.
#pragma endregion

#pragma region do while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	int connect = 0;
	//	
	//	do
	//	{
	//		printf("Access");
	//	} while (connect > 3);

	// �ݺ����� ��� �̸� �����ؼ� �����ϴ� ������ ������,
	// ������ Ʋ�ȴٸ� ���� �ݺ��� ���� ���� �б⸸ �ٽ�
	// �˻��Ͽ� ó���մϴ�.
#pragma endregion

#pragma region nested for��

	//	for (int i = 0; i < 3; i++)
	//	{
	//		printf("i�� �� : %d\n\n", i);
	//	
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("j�� �� : %d\n", j);
	//		}
	//	
	//		printf("\n");
	//	}

#pragma endregion

#pragma region continue��
// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
// �����ϴ� ����Դϴ�.

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