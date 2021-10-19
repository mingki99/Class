#pragma once
#include "Draw.h"
class Circle : public Draw
{
public:
	Circle();
	virtual ~Circle();

	virtual void Location() override;
	virtual void draw() override;

	virtual void save() override;
};

