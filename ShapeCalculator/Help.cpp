#include "stdafx.h"
#include "Help.h"
#include "Menu.h"

Help::Help()
{
}


Help::~Help()
{
}


void Help::helpMessage()						//help menu displaying messages to tell the user how to use the program
{
	cout << "" << endl <<
		"To use the shape calculating features of this program you must first go back to the menu then press 1 to continue." << endl <<
		"Or alternatively you could quit by entering 3 or return to this page of text with 2." << endl;
	system("pause");							//pauses to read text without cluster
	cout << "" << endl <<						//readability enhancing blank lines
		"From there you will be asked to choose a shape" <<endl<<
		"You have the choice between six shapes of which three are 2D shapes and three are 3D." <<endl;
	system("pause");
	cout << "" << endl <<
		"The 2D shapes are: Circle , Rectangle and Triangle" << endl <<
		"The 3D shapes are: Cube, Cuboid and Pyramid" << endl;
	system("pause");
	cout << "" << endl <<
		"Next you must choose which calculation you wish to use for your selected shape." << endl <<
		"If you select a 2D shape then you will have a choice of area or perimeter or in the case of the shape circle you have circumference instead of perimeter." << endl <<
		"If you select a 3D shape then you will have a choice between volume or surface area with the exception of pyramid that just calculates the volume." << endl;
	system("pause");
	cout << "" << endl <<
		"After choosing an attribute you will be asked to enter the relevant statistics for the shape and calculation you have chosen." << endl <<
		"For The 2D shapes they require the following:" << endl <<
		"Circle will need the diameter for either calculation, rectangle will need the length and width for either calculation and triangle will need the base length for any calculation and the height to the tallest point to work out the area and the length of the other two sides for the perimeter" << endl;
	system("pause");
	cout << "" << endl <<
		"For 3D shapes they require the following:" << endl <<
		"Cube will require the length from an edge to an edge for either calculation, cuboid will require the length, width and height for either calculation and pyramid requires the length and also the height to the tallest point for its calculation" << endl;
		system("pause");
		cout<<"" << endl<<
		"The result of the calculation will then be carried out by the program and shown to you and then you will be brought back to the menu after pressing a key on the keyboard."<<endl<<
		"Throughout the program if you recieve the message invalid input then you have either put in a too high input, too low input,wrong sort of input or just a general wrong input. "<<endl<<
		""<< endl;
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();					//returns user to the menu classes initialChoice method
}
