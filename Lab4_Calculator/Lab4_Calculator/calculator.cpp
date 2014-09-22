/* Author: Christopher Jones
* Date: 9/16/2014
* Name: Lab4 - Scientific Calculator
* This program will carry our a complex mathematical operation
* CS - 13005
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int operation;
	double base, result, exponent;
	bool continue = true;
	// User will select their choice based on menu options
	do {
		cout << "1. absolute value\n2. ceiling\n3. power\n4. logarithm\nSelect an operation: ";
		cin >> operation;

		if (operation >= 1 && operation <= 4) { 
			cout << "Enter number: ";
			cin >> base;
			switch (operation) { // switch operator used here to avoid redundancy
			case 1:
				result = abs(base);
				break;
			case 2:
				result = ceil(base);
				break;
			case 3:
				cout << "Enter exponent: ";
				cin >> exponent;
				result = pow(base, exponent);
				break;
			case 4:
				result = log(base);
				break;
			}
			cout << "The result is: " << result << endl << endl;
		}
		else {
			continue = false; // exits out of program
		}
	} while (continue == true);

	return 0;
}