#include "stdafx.h"
#include "Triangle.h"
#include "Menu.h"


Triangle::Triangle()
{
	answer = 0.0f;													// a variable to store calculation results
	baselength = 0.0f;
	height = 0.0f;
	length1 = 0.0f;
	length2 = 0.0f;
}


Triangle::~Triangle()
{
}


void Triangle::areaCalc()
{
	answer = (baselength * height) / 2;								// calculation of area of triangle
	cout << "The area of your triangle is " << answer << endl		//output of answer variable which contains the area of the triangle
	<<endl;															//empty row of space for added readability in the program
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();										//loads menu by initializing the class called menu and its method initialchoice
}


void Triangle::perimeterCalc()
{
	answer = baselength + length1 + length2;						//calculation of the perimeter of a triangle
	cout << "The perimeter of your triangle is " << answer << endl	// output of answer variable which contains the perimeter of the triangle
	<<endl;		
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();										//loads menu by initializing the class called menu and its method initialchoice
}



