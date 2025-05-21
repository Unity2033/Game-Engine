#include <stdio.h>

void main()
{
#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며
	// 자료형의 크기는 바이트 단위로 이루어집니다.

	// 자료형의 경우 자료형에 따라 저장할 수 있는
	// 종류와 범위가 결정됩니다.
#pragma endregion

#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을
	// 생성하는 것입니다.

	// char alphabet = 'A';
	// 
	// int integer = 100;
	// 
	// float decimal = 36.5f;
	// 		
	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// printf("integer 변수의 값 : %d\n", integer);
	// printf("decimal 변수의 값 : %f\n", decimal);

	// 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며,
	// 원래 저장되어 있는 값은 새로 저장된 값에 의해 지워집니다.

	// alphabet = 'B';
	// integer = 200;
	// decimal = 7.5f;
	// 
	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// printf("integer 변수의 값 : %d\n", integer);
	// printf("decimal 변수의 값 : %f\n", decimal);

	// 변수의 메모리 공간은 프로그램이 실행될 때마다 바뀝니다.
#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 대문자와 소문자를 구별하여 사용할 수 있습니다.

	// ex) int score = 100;
	// ex) int SCORE = 50;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.

	// ex) int int = 10;

	// 3. 변수의 이름에 공백이 포함될 수 없습니다.

	// ex) int x value = 30;

	// 4. 변수의 이름으로 특수 기호는 "_"와 "$"만 사용할 수 있습니다.

	// ex) int x_value = 20;

	// 5. 변수의 이름은 숫자로 시작할 수 없습니다.

	// ex) int 5day = 5;
	// ex) int minute1 = 30;

#pragma endregion

#pragma region 상수
	// 프로그램 실행 중에 더 이상 값이 변경되지 않는 메모리입니다.

	// const float pi = 3.141592f;

	// pi = 6.235f;

	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 리터럴 상수라고 하며,
	// 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 합니다.
#pragma endregion

#pragma region 산술 연산자

	// 1. 변수 = 변수 + 리터럴 상수
	// 2. 변수 = 리터럴 상수 - 심볼릭 상수
	// 3. 변수 = 변수 * 심볼릭 상수
	// 4. 변수 = 변수 / 리터럴 상수 
	// 5. 변수 = 리터럴 상수 % 리터럴 상수

	int x = 10;
	int y = 5;
	int z = 1;

	const int constant = 5;

	int storage1 = x + 5;
	int storage2 = 10 - constant;
	int storage3 = y * constant;
	int storage4 = z / 1;
	int storage5 = 10 % 10;

	printf("storage1 변수의 값 : %d\n", storage1);
	printf("storage2 변수의 값 : %d\n", storage2);
	printf("storage3 변수의 값 : %d\n", storage3);
	printf("storage4 변수의 값 : %d\n", storage4);
	printf("storage5 변수의 값 : %d\n", storage5);

#pragma endregion
}