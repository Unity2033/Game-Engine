#pragma once
#include "Vehicle.h"

class Boat : public Vehicle
{
protected:
	float fuel;

public:
	Boat();
	~Boat();
};

