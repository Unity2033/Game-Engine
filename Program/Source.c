#include <stdio.h>

void Process()
{
	printf("Process...\n");
}

void Stats(int health, const char * name)
{
	printf("health : %d\n", health);
	printf("name : %s\n\n", name);
}

void Swap(int left, int right)
{
	int temporary = left;

    left = right;

	right = temporary;
}

void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.

	// Process();

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	// Stats(100, "Slime");
	// Stats(250, "Goblin");
	// Stats(500, "Junior Golem");

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 여러 개의 매개 변수를 생성할 수 있습니다.
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.

	int x = 10;
	int y = 20;

	Swap(x, y);

	printf("x 변수의 값 : %d\n", x);
	printf("y 변수의 값 : %d\n", y);

	// 인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의
	// 자료형이 서로 일치해야 합니다.
#pragma endregion



	// 함수는 프로그램이 실행 중일 때 함수 호출 위치
	// 에서 해당 함수로 이동시킨 뒤, 작업을 수행하고
	// 다시 원래 위치로 돌아오는 구조입니다.
#pragma endregion


}