// Prints the sum of positive numbers that the user inputs
// Project #3.1 Positive Sum
// CS 13005
// Christopher Jones
// 09/06/2014

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	// Initializing variables 
	int i = 0;
	int total = 0;

	// prompt user to enter integers 

	cout << "Input sequence of integers (zero to stop):" << endl;
	
	do
	{
		cin >> i; // User enters array of integers

		if (i > 0)
		{
			total += i;
		}
	} while (i != 0);
	cout << total << endl;

	return 0;

}