#include <iostream>
#include <vector>

using namespace std;

int main()
{
#pragma region 반복자


	std::vector<int> vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);

	for (std::vector<int>::iterator iterator = vector.begin(); iterator != vector.end(); ++iterator)
	{
		cout << *iterator << endl;
	}

#pragma endregion


	return 0;
}
