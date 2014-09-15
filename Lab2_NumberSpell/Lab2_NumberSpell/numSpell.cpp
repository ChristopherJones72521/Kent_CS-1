// Displays a number written alphabetically rather than numerically
// Project 2 Number Spell
// CS 13005
// Christopher Jones
// 09/03/2014

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	// input the numeric values
	int num1 = 0;
	int num2 = 0;
	cout << "Enter two integers: ";
	cin >> num1 >> num2;



	if (num1 >= 2)
	{
		switch (num1)
		{
		case 2:
			cout << "twenty-";
			break;
		case 3:
			cout << "thirty-";
			break;
		case 4:
			cout << "forty-";
			break;
		case 5:
			cout << "fifty-";
			break;
		case 6:
			cout << "sixty-";
			break;
		case 7:
			cout << "seventy-";
			break;
		case 8:
			cout << "eighty-";
			break;
		case 9:
			cout << "ninety-";
			break;
		default:
			cout << "Error ";
		}
		switch (num2)
		{
		case 0:
			cout << " ";
			break;
		case 1:
			cout << "one ";
			break;
		case 2:
			cout << "two ";
			break;
		case 3:
			cout << "three ";
			break;
		case 4:
			cout << "four ";
			break;
		case 5:
			cout << "five ";
			break;
		case 6:
			cout << "six ";
			break;
		case 7:
			cout << "seven ";
			break;
		case 8:
			cout << "eight ";
			break;
		case 9:
			cout << "nine ";
			break;
		default:
			cout << " Error ";
		}
	}
	if (num1 == 1)
		{
		switch (num2)
		{
		case 0:
			cout << "Ten";
			break;
		case 1:
			cout << "Eleven";
			break;
		case 2:
			cout << "Twelve";
			break;
		case 3:
			cout << "Thirteen";
			break;
		case 4:
			cout << "Fourteen";
			break;
		case 5:
			cout << "Fifteen";
			break;
		case 6:
			cout << "Sixteen";
			break;
		case 7:
			cout << "Seventeen";
			break;
		case 8:
			cout << "Eighteen";
			break;
		case 9:
			cout << "Nineteen";
			break;
		default:
			cout << " Error ";
		}
	}
	if (num1 == 0)
	{
		switch (num2)
		{
		case 0:
			cout << " ";
			break;
		case 1:
			cout << "one ";
			break;
		case 2:
			cout << "two ";
			break;
		case 3:
			cout << "three ";
			break;
		case 4:
			cout << "four ";
			break;
		case 5:
			cout << "five ";
			break;
		case 6:
			cout << "six ";
			break;
		case 7:
			cout << "seven ";
			break;
		case 8:
			cout << "eight ";
			break;
		case 9:
			cout << "nine ";
			break;
		default:
			cout << " Error ";
		}
	}
	return 0;

}