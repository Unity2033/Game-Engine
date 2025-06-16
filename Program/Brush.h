#pragma once
#include "Paint.h"

class Brush : public Paint
{
public:
	virtual void Draw() override;

	virtual ~Brush() override;
};

