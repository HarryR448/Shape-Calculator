#include "stdafx.h"
#include "Menu.h"
#include "Help.h"
#include "Shape2D.h"							//including headers for all other classes so that they can be initialized into objects in this class
#include "Shape3D.h"
#include "Circle.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Pyramid.h"
#include "Rectangle.h"
#include "Triangle.h"


Menu::Menu()
{
	menuloop = 1;													//loop variable used in input methods throughout the class
	shapeselection = 0;												//used to store your shape choice
	attributeselection = 0;											//used to store your attribute choice
	length = 0.0f;													//shape attribute variables for storing the inputted attribute sizes
	length1 = 0.0f;
	length2 = 0.0f;
	height = 0.0f;
	width = 0.0f;
}


Menu::~Menu()
{
}


void Menu::initialChoice()
{
	int initialselection = 0;									//variable to store input for user action choice

		cout << "This is the shape calculator program!" << endl;
		cout << "To continue onto the program press 1, to recieve instruction on the programs operation enter 2 or to quit enter 3." << endl;
		cin >> initialselection; //

		switch (initialselection)
		{
		case 1:
			shapeChoice();											// loads next method in this class
			break;
		case 2:
		 {
			Help HelpObj;											//loads help page then returns to this selection
			HelpObj.helpMessage();
			break;
		 }
		case 3:
			exit(0);												// exits the program
		
		default:													// in case the input is incorrect and results in an infinite loop this will clear what was inputted and loop the method
		 {
			cin.clear();											//resets cin stream state
			cin.ignore(INT_MAX, '\n');								//reads and ignores the inputs
			cout << "Invalid entry for menu choice, Please retry." << endl
			<< "" << endl;
			initialChoice();										//restarts method
		 }
		}
}


void Menu::shapeChoice()
{
		cout << "Choose the shape you wish the use by entering its assigned number below: " << endl
		<< "1-Circle 2-Cube 3-Rectangle 4-Cuboid 5-Triangle 6-Pyramid" << endl;
		cin >> shapeselection;										//enables input for choosing a shape

		if (shapeselection >= 1 && shapeselection <= 6)
		{
			attributeChoice();										// initialising attributeChoice method	
		}
		else
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid entry for shape choice, Please retry." << endl
			<< "" << endl;
			shapeChoice();
		}
}


void Menu::attributeChoice()
{
		if (shapeselection == 1)									// if circle is chosen the below message is displayed
		{
			cout << "Choose the attribute you wish the use by entering its assigned number below: " << endl
			<< "1-Area 2-Circumference" << endl;
		}
		else if (shapeselection == 3 || shapeselection == 5)		//if rectangle or triangle is chosen this message is displayed
		{
			cout << "Choose the attribute you wish the use by entering its assigned number below: " << endl
			<< "1-Area 2-Perimeter" << endl;
		}														
		else if (shapeselection == 2 || shapeselection == 4)		//if cube or cuboid is chosen this message is displayed
		{
			cout << "Choose the attribute you wish the use by entering its assigned number below: " << endl
			<< "1-Volume 2-Surface Area" << endl;
		}
		else if (shapeselection == 6)								//if pyramid is chosen this message is dispayed
		{
			cout << "You have chosen pyramid, this calculator can only calculate volume for this shape. Please press one or two to continue." << endl;
		}
		
		cin >> attributeselection;									//enables input for choosing an attribute

		if (attributeselection == 1 || attributeselection == 2)
		{
			statsInput();
		}

		else
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid entry for attribute choice, Please retry." << endl
			<< "" << endl;
			attributeChoice();
		}
}


void Menu::statsInput()
{
	switch (shapeselection)
	{
	case 1:														//if circle is chosen then relevant methods are initialized
	{
		enterWidth();											//entering the width method initialised
		initialiseCalculations();								//initialise next method within class
	}

	case 2:														//cube has been chosen
	{
		enterLength();
		initialiseCalculations();
	}

	case 3:														//rectangle has been chosen
	{
		enterLength();
		enterWidth();
		initialiseCalculations();
	}

	case 4:														//cuboid has been chosen
	{
		enterLength();
		enterWidth();
		enterHeight();
		initialiseCalculations();
	}

	case 5:														//triangle has been chosen
	{
		enterLength();
		initialiseCalculations();
	}

	case 6:														//pyramid has been chosen
	{
		enterLength();
		enterHeight();
		initialiseCalculations();
	}
	}
}

void Menu::enterWidth()
{
	menuloop = 1;												// loop variable activated
	do
	{
		cout << "Please input the width of your chosen shape:" << endl;

		cin >> width;											//input of width into the global width variable

		if (width > 0 && width < 99999)						//validation against extreme values being done
		{
			menuloop = 0;
		}

		else													// in case the input is incorrect and results in an infinite loop this will clear what was inputted and restart the method
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid entry for width, Please retry." << endl
			<< "" << endl;
			enterWidth();
		}

	} while (menuloop == 1);									// loop will run until widthloop is set to 0
}


void Menu::enterHeight()
{
	menuloop = 1; 
	do
	{
		cout << "Please input the height of your chosen shape at its tallest point:" << endl;
		cin >> height;													

		if (height > 0 && height < 99999)								
		{
			menuloop = 0;
		}

		else														
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid entry for height, Please retry." << endl
			<< "" << endl;
			enterHeight();
		}
	} while (menuloop == 1);											
}


void Menu::enterLength()
{
	menuloop = 1;											
	do
	{
		cout << "Please input the length/base length of your chosen shape:" << endl;
		cin >> length;	

		if (length > 0 && length < 99999)							
		{
			menuloop = 0;
		}

		else									
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid entry for length, Please retry." << endl
			<< "" << endl;
			enterLength();
		}
	} while (menuloop == 1);										
}


void Menu::enterLength1()
{
	menuloop = 1;										
	do
	{
		cout << "Please input the length of another side of your triangle:" << endl;
		cin >> length1;		

		if (length1 > 0 && length1 < 99999)						
		{
			menuloop = 0;
		}

		else								
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid entry for side length, Please retry." << endl
			<< "" << endl;
			enterLength1();
		}
	} while (menuloop == 1);										
}


void Menu::enterLength2()
{
	menuloop = 1;											
	do
	{
		cout << "Please input the length of the final side of your triangle:" << endl;
		cin >> length2;												

		if (length2 > 0 && length2 < 99999)					
		{
			menuloop = 0;
		}

		else									
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid entry for the second side length, Please retry." << endl
			<< "" << endl;
			enterLength2();
		}

	} while (menuloop == 1);										
}


void Menu::initialiseCalculations()
{
	switch (shapeselection)
	{
	case 1:														//circle
	{
		Circle CircleObj;										//class initialized as object
		CircleObj.radius = width / 2;
		Shape2D * Shape2DObj = &CircleObj;						//shape2d initialized as a pointer object and circle obj is set to be a reference object so the contents of that class are contained in Shape2D
		switch (attributeselection)
		{
		case 1:
			Shape2DObj->areaCalc();								//initialising the circle classes areaCalc method
			break;
		case 2:
			Shape2DObj->circumferenceCalc();
			break;
		}
	}

	case 2:
	{
		Cube CubeObj;
		CubeObj.length = length;
		Shape3D * Shape3DObj = &CubeObj;
		switch (attributeselection)
		{
		case 1:
			Shape3DObj->volumeCalc();							//cube volume method initialised
			break;
		case 2:
			Shape3DObj->surfaceAreaCalc();						//cube surface area method
			break;
		}
	}

	case 3:
	{
		Rectangle RectangleObj;
		RectangleObj.length = length;
		RectangleObj.width = width;
		Shape2D * Shape2DObj = &RectangleObj;
		switch (attributeselection)
		{
		case 1:
			Shape2DObj->areaCalc();								//rectangle area method
		case 2:
			Shape2DObj->perimeterCalc();						//rectangle perimeter method
		}
	}

	case 4:
	{
		Cuboid CuboidObj;
		CuboidObj.length = length;
		CuboidObj.width = width;
		CuboidObj.height = height;
		Shape3D * Shape3DObj = &CuboidObj;
		switch (attributeselection)
		{
		case 1:
			Shape3DObj->volumeCalc();							//cuboid volume method initialised
			break;
		case 2:
			Shape3DObj->surfaceAreaCalc();						//cuboid surface area method
			break;
		}
	}

	case 5:
	{
		Triangle TriangleObj;
		TriangleObj.baselength = length;
		Shape2D * Shape2DObj = &TriangleObj;

		switch (attributeselection)
		{
		case 1:
		{
			enterHeight();
			TriangleObj.height = height;
			Shape2DObj->areaCalc();								//triangle area method
		}
		case 2:
		{
			enterLength1();
			enterLength2();
			TriangleObj.length1 = length1;
			TriangleObj.length2 = length2;
			Shape2DObj->perimeterCalc();						//triangle perimeter method
		}
		}
	}

	case 6:
	{

		Pyramid PyramidObj;
		PyramidObj.height = height;
		PyramidObj.length = length;
		Shape3D * Shape3DObj = &PyramidObj;
		Shape3DObj->volumeCalc();								//pyramid volume method being initialised
	}
	}
}


	