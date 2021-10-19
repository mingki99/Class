#pragma once
#include "Draw.h"

class Triangle : public Draw
{
public:
	Triangle();
	virtual ~Triangle();

	virtual void Location() override;
	virtual void draw() override;

	virtual void save() override;
};

