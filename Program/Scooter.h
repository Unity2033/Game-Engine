#pragma once
#include "Vehicle.h"

class Scooter : public Vehicle
{
protected:
	float fuel;

public:
	Scooter();
	~Scooter();
};

