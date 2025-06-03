#include <stdio.h>
#include <stdarg.h>

void Process()
{
	printf("Process...\n");
}

void Stats(int health, const char* name)
{
	printf("health : %d\n", health);
	printf("name : %s\n\n", name);
}

void Swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;
}

void Recursion(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("Recursion\n");

	Recursion(count - 1);
}

inline void Collision()
{
	printf("Collision");
}

void Average(int count, ...)
{
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수입니다.
	va_list pointer;

	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수입니다.
	va_start(pointer, count);

	double sum = 0.0;

	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수입니다.
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	double average = sum / count;

	printf("average : %lf\n", average);

	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수입니다.
	va_end(pointer);
}

void Provide()
{
	printf("Provide\n");
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

	// int x = 10;
	// int y = 20;
	// 
	// Swap(&x, &y);
	// 
	// printf("x 변수의 값 : %d\n", x);
	// printf("y 변수의 값 : %d\n", y);

	// 인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의
	// 자료형이 서로 일치해야 합니다.
#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는
	// 함수입니다.

	// Recursion(3);
#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	// Collision();

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가
	// 빠르지만, 인라인 함수를 많이 사용하게 되면 함수의 코드가
	// 복사되기 때문에 실행 파일의 크기가 커지게 됩니다.
#pragma endregion

#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은
	// 인수를 추가로 받을 수 있는 인수입니다.

	// Average(5, 92, 90, 88, 95, 100);
#pragma endregion

#pragma region 함수 포인터
	// 함수의 주소 값을 저장하고 가리킬 수 있는
	// 포인터 변수입니다.

	// void (*functionPointer)();
	// 
	// functionPointer = Provide;
	// 
	// functionPointer();

#pragma endregion

	// 함수는 프로그램이 실행 중일 때 함수 호출 위치
	// 에서 해당 함수로 이동시킨 뒤, 작업을 수행하고
	// 다시 원래 위치로 돌아오는 구조입니다.
#pragma endregion
}