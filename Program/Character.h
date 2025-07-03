#pragma once
#include <iostream>

using namespace std;

class Character
{
private:
	weak_ptr<Character> pointer;
public:
	Character();
	void Partner(const weak_ptr<Character>& character);
	~Character();

};

