#include "CContainer.h"
#include "CRectangle.h"
#include "CTriangle.h"
#include <conio.h>

int main()
{
	CContainer *figure[40];
	CRectangle rectangle;
	CTriangle triangle;

	char choice;
	int number = 0;

	do
	{
		std::cout << "1 - Add triangle\n";
		std::cout << "2 - Add rectangle\n";
		std::cout << "3 - Display all figures\n";
		std::cout << "4 - Display the sum of all figure perimeters\n";
		std::cout << "5 - Display all rectangle colors\n";
		std::cout << "0  - to end\n";
		std::cin >> choice;
		switch (choice)
		{
		case '1':
		{
			figure[number] = &triangle;
			figure[number]->get_data();
			number++;
			break;
		}
		case '2':
		{
			figure[number] = &rectangle;
			figure[number]->get_data();
			number++;
			break;
		}
		case '3':
		{
			for(int i=0;i<number;i++)
			{
				if (CRectangle* rec = dynamic_cast<CRectangle*>(figure[i]))
				{
					std::cout << "Rectangle: " << std::endl;
				}
				else
				{
					std::cout << "Triangle: " << std::endl;
				}
				figure[i]->display_data();
				std::cout<<std::endl;
			}
			break;
		}
		case '4':
		{
			float sum = 0;
			for (int i = 0; i < number; i++)
			{
				sum += figure[i]->perimeter();
			}
			std::cout << sum << std::endl;
			break;
		}
		case '5':
		{
			for (int i = 0; i < number; i++)
			{
				if (CRectangle* rec = dynamic_cast<CRectangle*>(figure[i]))
				{
					std::cout << figure[i]->get_color() << std::endl;
				}
			}
			break;
		}
		}
	} while (choice != '0');
}