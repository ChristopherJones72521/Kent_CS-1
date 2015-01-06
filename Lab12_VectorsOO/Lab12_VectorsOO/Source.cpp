//  Lab12_VectorsProc
//  Source.cpp
//  CS 13001 section 005
//  Created by Christopher Jones 
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//
// Description: Implementation of dynamically expanding and contracting container with vectors


#include "vectorsoo.h"

int main(){
	int number;
	char operation;
	vectorsoo array;

	do{
		cout << "Enter operation [a,r,q] and number:" << endl;
		cin >> operation;
		if (operation != 'q')
			cin >> number;
		if (operation == 'a'){
			array.addNumber(number);
		}
		if (operation == 'r'){
			array.removeNumber(number);
		}
		if (operation != 'q')
			array.output();
	} while (operation != 'q');
	array.output();
}