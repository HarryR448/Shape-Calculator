#include "stdafx.h"
#include "Circle.h"
#include "Menu.h"


Circle::Circle()
{
	answer = 0.0f;											//stores the answer for either calculation
	pi = 3.14159265f;										// stores the value of Pi for use in the calculations
	radius = 0.0f;											//stores the radius which is inputted via from main by taking the diameter and dividing it by two
}


Circle::~Circle()
{
}

void Circle::areaCalc()
{

	answer = radius * pi;									//radius is multiplied by the value of pi and the answer is stored in the answer variable
	answer = radius * answer;								//radius is multiplied by the value of answer and the result is stored in answer
	cout << "Your circles area is "<< answer << endl		// the final result in answer for the area of a circle is displayed
	<< endl;
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();								//loads menu by initializing the class called menu and its method initialchoice
}


void Circle::circumferenceCalc()
{
	answer = (pi * 2) * radius;
	cout << "Your circles circumference is " << answer << endl
	<<endl;
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();								//loads menu by initializing the class called menu and its method initialchoice
}

