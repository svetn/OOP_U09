#pragma once
#include"CFigure.h"
#include "CContainer.h"
class CRectangle: public CFigure
{
protected:
	float a, b;
public:
	void get_data();
	void display_data();
	std::string get_color();
	float perimeter();
	CRectangle();
};

