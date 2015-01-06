//
// Description: This is a program that allows the user to add or remove an integer...
// ...number to a collection of integers and then prints all of them.
// Copywrite Christopher Jones 2014(c)
//

#include "Header.h"

int main(){
	char operation;
	int input, size = 0;
	int *dynArray = new int[size];

	do{
		cout << "Enter operation [a,r,q]" << endl;
		cin >> operation;
		if (operation == 'a' || operation == 'r'){
			cout << "and a number" << endl;
			cin >> input; 
		}


		if (operation == 'a'){
			addNumber(dynArray, input, size);
		}

		if (operation == 'r'){
			removeNumber(dynArray, input, size);
		}

	} while (operation != 'q');

	for (int o = 0; o<size; o++){
		cout << dynArray[o] << " ";
	}
	cout << endl;
}