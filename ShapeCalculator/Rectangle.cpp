#include "stdafx.h"
#include "Rectangle.h"
#include "Menu.h"


Rectangle::Rectangle()
{
	answer = 0.0f;											// a variable to store calculation results
	length = 0.0f;
	width = 0.0f;
}


Rectangle::~Rectangle()
{
}

void Rectangle::areaCalc()
{
	answer = length * width;								//area calculation for a rectangle with result stored in answer variable
	cout << "Your retangles area is " << answer << endl
	<< endl;												//empty row of space
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();								//loads menu by initializing the class called menu and its method initialchoice

}


void Rectangle::perimeterCalc()
{
	answer = (length + width) * 2;							//perimeter calculation for a rectangle with result stored in answer variable
	cout << "your rectangles perimeter is " << answer << endl
	<< endl;												//empty row of space
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();								//loads menu by initializing the class called menu and its method initialchoice
}


