#pragma once
#include <iostream>
#include <string>
#include "CContainer.h"
class CFigure: public CContainer
{
protected:
	std::string color;
public:
	 void get_data();
	 void display_data();
	CFigure();
};

