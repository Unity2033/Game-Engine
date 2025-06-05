#include <stdio.h>	 
#include <stdlib.h>
#include <time.h>

void Shuffle(int array[ ], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

void View(int count)
{
	printf("Health : ");

	for (int i = 0; i < count; i++)
	{
		printf("��");
	}

	printf("\n\n");
}

int main()
{
#pragma region �ǻ� ����

	// rand() : 0 ~ 32767 ������ ������ ���� ��ȯ�ϴ� �Լ��Դϴ�.
	
	// time(NULL) : 1970�� 1�� 1�� (00 : 00 : 00) UTC ���Ŀ� ���� ��(Second)�� ��ȯ�ϴ� �Լ��Դϴ�.

	// srand(seed) : ���� �������� �õ带 �����ϴ� �Լ��Դϴ�.

	// srand(time(NULL));
	// 
	// int index = rand() % 10 + 1;
	// 
	// printf("index : %d\n", index);

#pragma endregion

#pragma region ���� �Լ�

	//	srand(time(NULL));
	//	
	//	int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	
	//	int size = sizeof(list) / sizeof(int);
	//	
	//	Shuffle(list, size);
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		printf("list[%d] = %d\n", i, list[i]);
	//	}

#pragma endregion

#pragma region Game

	srand(time(NULL));

	int health = 5;
	int answer = 0;

	int computer = rand() % 50 + 1;

	while (health > 0)
	{
		View(health);

		printf("Computer�� ������ �ִ� �� : ");
		scanf_s("%d", &answer);

		printf("\n");

		if (answer > computer)
		{
			health--;
			printf("��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
		}
		else if (answer < computer)
		{
			health--;
			printf("��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
		}
		else
		{
			break;
		}

		printf("\n");
	}

	if (health > 0)
	{
		printf("V I C T O R Y\n");
	}
	else
	{
		printf("D E F E A T\n");
	}

#pragma endregion


	return 0;
}