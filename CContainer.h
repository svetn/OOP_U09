#pragma once
#include <string>
class CContainer
{
public:
	virtual void get_data() = 0;
	virtual void display_data() = 0;
	virtual float perimeter() = 0;
	virtual std::string get_color() = 0;
};

