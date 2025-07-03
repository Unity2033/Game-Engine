#include "Character.h"

Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::Partner(const weak_ptr<Character> & character)
{
	pointer = character;
}

Character::~Character()
{
	cout << "Release Character" << endl;
}
