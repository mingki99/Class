#pragma once
#include "GraphicEditor.h"

class Draw : public GraphicEditor
{
public:	
	Draw();
	virtual ~Draw();

	virtual void Location();
	virtual void draw() override;

	virtual void save() override;

};

