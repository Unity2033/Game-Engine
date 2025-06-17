#include <iostream>

#define SIZE 5

using namespace std;

template <typename T>
bool Same(T left, T right)
{
	return left == right;
}

template<>
bool Same(const char * left, const char * right)
{
	return strlen(left) == strlen(right);
}

template<typename T>
class Container
{
private:
	int index;

	T list[SIZE];

public:
	Container()
	{
		index = 0;

		for (int i = 0; i < SIZE; i++)
		{
			list[i] = NULL;
		}
	}

	void Add(T data)
	{
		if (index < SIZE)
		{
			list[index++] = data;
		}
		else
		{
			cout << "Index Out of Range" << endl;
		}
	}

	const T & operator [](int count)
	{
		return  list[count];
	}
};

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수
	// 있는 기능입니다.

	// cout << Same<char>('A', 'B') << endl;
	// cout << Same<int>(5, 5) << endl;
	// cout << Same<int>(14.5f, 7.5f) << endl;

	Container<int> container;

	container.Add(10);
	container.Add(20);
	container.Add(30);
	container.Add(40);
	container.Add(50);

	for (int i = 0; i < SIZE; i++)
	{
		cout << container[i] << endl;
	}

#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 기능입니다.

	// cout << Same("ABC", "ABCD");
#pragma endregion


	return 0;
}
