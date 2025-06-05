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
		printf("♥");
	}

	printf("\n\n");
}

int main()
{
#pragma region 의사 난수

	// rand() : 0 ~ 32767 사이의 난수의 값을 반환하는 함수입니다.
	
	// time(NULL) : 1970년 1월 1일 (00 : 00 : 00) UTC 이후에 지난 초(Second)를 반환하는 함수입니다.

	// srand(seed) : 난수 생성기의 시드를 설정하는 함수입니다.

	// srand(time(NULL));
	// 
	// int index = rand() % 10 + 1;
	// 
	// printf("index : %d\n", index);

#pragma endregion

#pragma region 셔플 함수

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

		printf("Computer가 가지고 있는 값 : ");
		scanf_s("%d", &answer);

		printf("\n");

		if (answer > computer)
		{
			health--;
			printf("컴퓨터가 가지고 있는 값보다 큽니다.\n");
		}
		else if (answer < computer)
		{
			health--;
			printf("컴퓨터가 가지고 있는 값보다 작습니다.\n");
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