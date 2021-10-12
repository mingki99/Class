#pragma once
#include <windows.h>
#include "Vector2D.h"
#include "Actor.h"

class APlayer : public AActor 
{
public:
	APlayer();
	~APlayer();

	void Render();


};
