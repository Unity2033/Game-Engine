#include <iostream>
#include "../Program/Packet.h"
#include "../Program/Resource.h"
#include "../Program/Character.h"

using namespace std;

int main()
{
#pragma region Smart Pointer

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수
	// 있도록 되어 있는 포인터입니다.

	// unique_ptr<Packet> pointer = make_unique<Packet>();
	// 
	// pointer->Receive();
	// 
	// unique_ptr<Packet> reference = std::move(pointer);
	// 
	// pointer->Receive();
#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자우너 객체를 필요하지 않을 때 자원 객체를
	// 해제하도록 설계되어 있는 포인터입니다.

	// shared_ptr<Resource> oil = make_shared<Resource>();
	// 
	// shared_ptr<Resource> mineral = make_shared<Resource>();
	// 
	// oil->Share(mineral);
	// 
	// mineral->Share(oil);
	// 
	// cout << "Reference Count : " << oil.use_count() << endl;
	// 
	// cout << "Reference Count : " << oil.use_count() << endl;

#pragma endregion

#pragma region weak pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 객체를
	// 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터입니다.

	// shared_ptr<Character> wizard = make_shared<Character>();
	// shared_ptr<Character> warrior = make_shared<Character>();
	// 
	// wizard->Partner(warrior);
	// warrior->Partner(wizard);
	// 
	// cout << "Reference Count : " << wizard.use_count() << endl;
	// 
	// cout << "Reference Count : " << warrior.use_count() << endl;

#pragma endregion

#pragma endregion

	return 0;
}
