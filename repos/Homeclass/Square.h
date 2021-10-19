#pragma once
#include "Draw.h"
class Square : public Draw
{
public:	
	Square();
	virtual ~Square();


	virtual void Location() override;
	virtual void draw() override;

	virtual void save() override;

};

