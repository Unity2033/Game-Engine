#include "Scooter.h"

Scooter::Scooter()
{
	fuel = 50.0f;
	speed = 50;

	cout << "Created Scooter\n" << endl;

}

Scooter::~Scooter()
{
	cout << "Destroy Scooter" << endl;
}
