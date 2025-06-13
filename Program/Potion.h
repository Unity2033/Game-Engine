#pragma once
#include "Consumable.h"

class Potion : public Consumable
{
public:
	virtual void Use() override;
};

