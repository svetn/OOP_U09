#pragma once
#include "CFigure.h"
#include "CContainer.h"
class CTriangle: public CFigure
{
protected:
	float a, b, c;
public:
	void get_data();
	void display_data();
	float perimeter();
	std::string get_color();
	CTriangle();
};

