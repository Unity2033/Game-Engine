#pragma once
#include <iostream>

using namespace std;

class Vehicle
{
protected:
	int speed;

public:
	Vehicle();

	void Move();

	~Vehicle();
};

