#include "stdafx.h"
#include "Cuboid.h"
#include "Menu.h"

Cuboid::Cuboid()
{	
	answer = 0.0f;															// variable for storing calculation results
	length = 0.0f;
	width = 0.0f;
	height = 0.0f;
}


Cuboid::~Cuboid()
{
}


void Cuboid::volumeCalc()
{
	answer = length * width * height;										//calculates volume and stores it in answer variable
	cout << "Your cuboids volume is " << answer << endl						//displays the volume
	<< endl; 																//empty row of space for added readability in the program
	system("pause");
	Menu MenuObj;															//menu class initialised
	MenuObj.initialChoice();												//loads menu by initializing the class called menu and its method initialchoice
}

void Cuboid::surfaceAreaCalc()
{
	answer = (2 * width*length) + (2 * length*height) + (2 * width*height); // calculates surface area and stores it in the answer variable
	cout << "Your cuboids surface-area is " << answer << endl				// displays the surface area
	<<endl;
	system("pause");
	Menu MenuObj;		
	MenuObj.initialChoice();		
}

