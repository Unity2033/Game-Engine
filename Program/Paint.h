#pragma once
#include <iostream>

using namespace std;

class Paint
{
protected:
	int thickness;
public:
	virtual void Draw() = 0;

	virtual ~Paint();
};

