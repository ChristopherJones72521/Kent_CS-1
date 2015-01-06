//  Lab12_VectorsProc
//  Source.cpp
//  CS 13001 section 005
//  Created by Christopher Jones 
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//
// Description: Implementation of dynamically expanding and contracting container functionality.


#include "header.h"

int main(){

	int number;
	char operation;
	vector<int> dynArray;

	do{ // assigns letters to operations
		cout << "Enter operation [a,r,q] and number:" << endl;
		cin >> operation;
		if (operation != 'q')
			cin >> number;
		if (operation == 'a'){
			adder(number, dynArray);
		}
		if (operation == 'r'){
			subber(number, dynArray);
		}
		if (operation != 'q')
			output(dynArray);
	} while (operation != 'q');
	output(dynArray);
}