#include <iostream>

using namespace std;

void Swap(int & x, int & y)
{
	int temporary = x;
	x = y;
	y = temporary;
}

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.

	// public : 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스 
	//          외부에서도 접근을 허용하는 지정자입니다.

	// protected : 클래스 내브와 자기가 상속하고 있는 클래스까지만
	//             접근을 허용하는 지정자입니다.

	// private : 클래스 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion

private:
	int x = 0;
	int y = 0;
	int z = 0;

protected:
	static int count;

public:
	void SetX(int value)
	{
		if (value >= 100)
		{
			cout << "Exception" << endl;
		}
		else
		{
			x = value;
		}
	}
	void SetY(int value)
	{
		if (value >= 100)
		{
			cout << "Exception" << endl;
		}
		else
		{
			y = value;
		}
	}
	void SetZ(int value)
	{
		if (value >= 100)
		{
			cout << "Exception" << endl;
		}
		else
		{
			z = value;
		}
	}

	const int & GetX()
	{
		return x;
	}
	const int & GetY()
	{
		return y;
	}
	const int & GetZ()
	{
		return z;
	}

	void Increase()
	{
		count = count + 1;
	}
};

int GameObject::count = 1;

int main()
{
#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 지정하는 지정자입니다.

	// int leftValue = 10;
	// int rightValue = 20;
	// 
	// Swap(leftValue, rightValue);
	// 
	// cout << "leftValue : " << leftValue << endl;
	// cout << "rightValue : " << rightValue << endl;
#pragma endregion

#pragma region 클래스
	// 사용자 정의 자료형으로 속성과 함수가 포함되어 있으며,
	// 클래스를 통해 객체를 생성하여 접근하고 사용하는 집합체입니다.

	GameObject gameObject1;

	gameObject1.SetX(10);
	gameObject1.SetY(20);
	gameObject1.SetZ(30);

	cout << "gameObject1.x : " << gameObject1.GetX() << endl;
	cout << "gameObject1.y : " << gameObject1.GetY() << endl;
    cout << "gameObject1.z : " << gameObject1.GetZ() << endl;

	cout << "GameObject의 크기 : " << sizeof(GameObject) << endl;

	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에
	// 포함되지만, 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않습니다.
#pragma endregion


	return 0;
}
