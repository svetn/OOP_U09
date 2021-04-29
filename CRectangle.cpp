#include "CRectangle.h"

void CRectangle::get_data()
{
	CFigure::get_data();
	std::cout << "a: ";
	std::cin >> this->a;

	std::cout << "b: ";
	std::cin >> this->b;
}

void CRectangle::display_data()
{
	CFigure::display_data();
	std::cout << "a: " << this->a << std::endl;
	std::cout << "b: " << this->b << std::endl;
}

std::string CRectangle::get_color()
{
	return this->color;
}

float CRectangle::perimeter()
{
	return (2*a) + (2*b);
}

CRectangle::CRectangle(): CFigure()
{
	this->a = 0;
	this->b = 0;
}
