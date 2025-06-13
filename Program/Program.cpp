#include <iostream>
#include "Potion.h"
#include "Lantern.h"
#include "Antidote.h"

using namespace std;

void Square(int x)
{
	cout << x * x << endl;
}

void Square(double x)
{
	cout << x * x << endl;
}

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을 
	// 서로 다른 방법으로 처리할 수 있는 작업입니다.

#pragma region 함수의 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	// Square(10);
	// Square(3.75);

	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는
	// 인수의 형태를 보고 호출하므로, 반환형으로 함수의
	// 오버로딩은 생성할 수 없습니다.
#pragma endregion

#pragma region 함수의 오버라이딩
	// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여
	// 사용하는 기능입니다.

	// Potion potion;
	// Lantern lantern;
	// Antidote antidote;
	// 
	// cout << "Posion 객체의 크기 : " << sizeof(Potion) << endl;
	// cout << "Lantern 객체의 크기 : " << sizeof(Lantern) << endl;
	// cout << "Antidote 객체의 크기 : " << sizeof(Antidote) << endl;
	// 
	// cout << "\n";
	// 
	// Consumable * inventory[3];
	// 
	// inventory[0] = &potion;
	// inventory[1] = &lantern;
	// inventory[2] = &antidote;
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	inventory[i]->Use();
	// }

	// 함수의 오버라이딩은 상속 관계에서만 이루어지며, 하위
	// 클래스에서 함수를 재정의할 때 상위 클래스의 함수 형태와
	// 일치해야 합니다.
#pragma endregion

#pragma region 가상 함수
  // 가상 함수 테이블을 사용하여 함수가 호출되는 함수를
  // 실행 시간에 결정하며, 한 개 이상의 가상 함수를 포함하는
  // 클래스가 있을 때 가상 함수 테이블을 가리키는 포인터가 추가됩니다.



  // 가상 함수는 실행 시간에 상위 클래스에 대한 참조로
  // 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion


	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와 
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.
#pragma endregion


	return 0;
}
