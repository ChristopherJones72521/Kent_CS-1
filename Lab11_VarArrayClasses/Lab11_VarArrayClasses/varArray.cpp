//  
//  Lab11_VarArrayClasses
//  varArray.cpp
//  CS 13001 section 005
//  Created by Christopher Jones on 11/11/14.
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//

#include "varArray.h"

int main(){

		int number;
		char operation;
		varArray a1;

		do{
			cout << "Enter operation [a,r,q] and number:" << endl;
			cin >> operation;
			if (operation != 'q')
				cin >> number;
			if (operation == 'a'){
				a1.addNumber(number);
			}
			if (operation == 'r'){
				a1.removeNumber(number);
			}
			if (operation != 'q')
				a1.output();
		} while (operation != 'q');
		a1.output();
}