#pragma once
#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int x, int y);
	
	void Position() const;

	const Vector2 & operator + (const Vector2 & vector2);
};

