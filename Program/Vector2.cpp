#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
#pragma region this 포인터
	// 자기 자신을 가리키는 포인터입니다.
	this->x = x;
	this->y = y;	   
#pragma endregion
}

void Vector2::Position() const
{
	cout << "X : " << x << endl;
	cout << "y : " << y << endl;
}

const Vector2& Vector2::operator++()
{
	this->x++;
	this->y++;

	return *this;
}

const Vector2& Vector2::operator++(int)
{
	Vector2 clone(x, y);

	this->x++;
	this->y++;

	return clone;
}

const Vector2 & Vector2::operator+(const Vector2& vector2)
{
	Vector2 clone(this->x + vector2.x, this->y + vector2.y);

	return clone;
}

const Vector2& Vector2::operator-(const Vector2& vector2)
{
	Vector2 clone(this->x - vector2.x, this->y - vector2.y);

	return clone;
}

const Vector2& Vector2::operator*(const Vector2& vector2)
{
	Vector2 clone(this->x * vector2.x, this->y * vector2.y);

	return clone;
}

const Vector2& Vector2::operator/(const Vector2& vector2)
{
	Vector2 clone(this->x / vector2.x, this->y / vector2.y);

	return clone;
}

const Vector2& Vector2::operator%(const Vector2& vector2)
{
	Vector2 clone(this->x % vector2.x, this->y % vector2.y);

	return clone;
}
