#pragma once
#include <iostream>
#include <vector>

class Draw;

class GraphicEditor
{
public:	
	GraphicEditor();
	virtual ~GraphicEditor();

	virtual void save();
	virtual void draw();
	void AddDraw(Draw* newDraw);

private:
	std::vector<Draw*> Draws;

};

