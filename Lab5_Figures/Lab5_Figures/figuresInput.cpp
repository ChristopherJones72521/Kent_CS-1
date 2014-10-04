// Author: Christopher Jones
// Date: 09/27/2014
// Name: Lab5_Figues
// Description: This project will print custom figures according to user input
// CS-13005


#include <iostream>
#include "figures.h"

using namespace std;

int main()
{
	int size = 0, shape = 0;
	char filled;

	do {
		// User dialog with program
		cout << "Please select your shape\n 1. Square\n 2. Left Triangle\n 3. Right Triangle\n" << endl;
		cout << "Enter any other number to exit" << endl;
		cin >> shape;
		cout << "Please enter the size of your shape." << endl;
		cin >> size;

		switch (shape) {
		case 1:
			cout << "Filled or Hollow (F or H?)" << endl;
			cin >> filled;
			if (filled == 'F' || filled == 'f') 
				// Runs function to create filled square
				filledSquare(size);
			else if (filled == 'H' || filled == 'h')
				// Runs function to create hollow square
				hollowSquare(size);
			else
				cout << "Please enter either 'F' or 'H'" << endl;
			break;
		case 2:
			// Creates left triangle
			leftTriangle(size);
			cout << endl;
			break;
		case 3:
			// Creates right triangle
			rightTriangle(size);
			cout << endl;
			break;
		}
	} while (shape >0 && shape <= 3);
	return 0;
}