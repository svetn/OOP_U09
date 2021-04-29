#include "CFigure.h"

void CFigure::get_data()
{
	std::cin.ignore();
	std::cout << "Color:";
	getline(std::cin, this->color);
}

void CFigure::display_data()
{
	std::cout << "Color: " << this->color << std::endl;
}

CFigure::CFigure()
{
	this->color = "Uninitialized";
}
