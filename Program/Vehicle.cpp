#include "Vehicle.h"

Vehicle::Vehicle()
{
	cout << "Created Vehicle" << endl;
}

void Vehicle::Move()
{
	cout << "Vehicle Move...\n" << endl;
}

Vehicle::~Vehicle()
{
	cout << "Destroy Vehicle\n" << endl;
}
