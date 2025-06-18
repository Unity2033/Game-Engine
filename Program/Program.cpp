#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

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

#pragma region 컨테이너 어댑터
	
#pragma region stack container

	// std::stack<int> stack;
	// 
	// stack.push(10);
	// stack.push(20);
	// stack.push(30);
	// stack.push(40);
	// stack.push(50);
	// 
	// cout << "Stack의 크기 : " << stack.size() << endl;
	// 
	// while (stack.empty() == false)
	// {
	// 	cout << stack.top() << endl;
	// 
	// 	stack.pop();
	// }
	// 
	// cout << "Stack의 크기 : " << stack.size() << endl;

#pragma endregion

#pragma region queue container

//	std::queue<int> queue;
//	
//	queue.push(10);
//	queue.push(20);
//	queue.push(30);
//	queue.push(40);
//	queue.push(50);
//	
//	cout << "Queue Size : " << queue.size() << endl;
//	
//	while (queue.empty() == false)
//	{
//		cout << queue.front() << " ";
//	
//		queue.pop();
//	}
//	cout << endl;
//	
//	cout << "Queue Size : " << queue.size() << endl;

#pragma endregion


#pragma endregion




	return 0;
}
