#pragma once
#include "Paint.h"

class Pencil : public Paint
{
public:
	virtual void Draw() override;

	virtual ~Pencil() override;
};

