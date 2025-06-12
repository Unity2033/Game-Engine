#include "Boat.h"

Boat::Boat()
{
	fuel = 250.0f;
	speed = 200;

	cout << "Created Boat\n" << endl;
}

Boat::~Boat()
{
	cout << "Destroy Boat" << endl;
}
