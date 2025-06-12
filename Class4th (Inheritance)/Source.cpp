#include <iostream>
#include "../Program/Scooter.h"
#include "../Program/Bicycle.h"
#include "../Program/Boat.h"

using namespace std;

int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수
	// 있도록 설정해주는 기능입니다.

	// Scooter scooter;
	// Bicycle bicycle;
	// Boat boat;
	// 
	// scooter.Move();
	// bicycle.Move();
	// boat.Move();
	// 
	// cout << "Bicycle 오브젝트의 크기 : " << sizeof(Bicycle) << endl;
	// cout << "Scooter 오브젝트의 크기 : " << sizeof(Scooter) << endl;
	// cout << "Boat 오브젝트의 크기 : " << sizeof(Boat) << endl;

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리를 포함한 상태로 메모리의 크기가 결정됩니다.
#pragma endregion



	return 0;
}
