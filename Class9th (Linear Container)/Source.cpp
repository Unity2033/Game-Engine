#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
#pragma region 선형 컨테이너

#pragma region vector container

	//	vector<int> vector;
	//	
	//	vector.reserve(10);
	//	
	//	vector.push_back(10);
	//	vector.push_back(20);
	//	
	//	cout << "vector Capacity : " << vector.capacity() << endl;
	//	
	//	vector.push_back(30);
	//	vector.push_back(40);
	//	vector.push_back(50);
	//	
	//	vector.pop_back();
	//	vector.pop_back();
	//	
	//	cout << "vector Capacity : " << vector.capacity() << endl;
	//	
	//	for (int i = 0; i < vector.size(); i++)
	//	{
	//		cout << vector[i] << " ";
	//	}

#pragma endregion

#pragma region list container
	//	std::list <int> list;
	//	
	//	// [20]
	//	list.push_back(20);
	//	
	//	// [20] - [30]
	//	list.push_back(30);
	//	
	//	// [10] - [20] - [30]
	//	list.push_front(10);
	//	
	//	// [20] - [30]
	//	list.pop_front();
	//	
	//	for (int element : list)
	//	{
	//		cout << element << endl;
	//	}
	//	
	//	list.assign(3, 10);
	//	
	//	for (int element : list)
	//	{
	//		cout << element << endl;
	//	}
	//	
	//	cout << "list size : " << list.size() << endl;
#pragma endregion

#pragma region string

	// string content;
	// 
	// content = "Battle Field";
	// 
	// content.append(" 5");
	// 
	// cout << content.capacity() << endl;
	// 
	// cout << content << endl;
	// 
	// content = "League of Legend";
	// 
	// 
	// cout << content << endl;
	// 
	// cout << content.capacity() << endl;
#pragma endregion

#pragma endregion
}
