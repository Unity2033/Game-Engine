#include <iostream>
#include "Packet.h"
#include "Resource.h"

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

	shared_ptr<Resource> oil = make_shared<Resource>();

	{
		shared_ptr<Resource> mineral = oil;

		cout << "Reference Count : " << oil.use_count() << endl;
	}

	cout << "Reference Count : " << oil.use_count() << endl;

#pragma endregion


#pragma endregion

	return 0;
}
