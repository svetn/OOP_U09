#include "CTriangle.h"

void CTriangle::get_data()
{
	CFigure::get_data();

	std::cout << "a: ";
	std::cin >> this->a;

	std::cout << "b: ";
	std::cin >> this->b;
	
	std::cout << "c: ";
	std::cin >> this->c;

}

void CTriangle::display_data()
{
	CFigure::display_data();
	std::cout << "a: " << this->a << std::endl;
	std::cout << "b: " << this->b << std::endl;
	std::cout << "c: " << this->c << std::endl;
}

float CTriangle::perimeter()
{
	return a + b + c;
}

std::string CTriangle::get_color()
{
	return this->color;
}

CTriangle::CTriangle(): CFigure()
{
	this->a = 0;
	this->b = 0;
	this->c = 0;
}
