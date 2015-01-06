//  Lab12_VectorsProc
//  funcDef.cpp
//  CS 13001 section 005
//  Created by Christopher Jones 
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//

#include "vectorsoo.h"

void vectorsoo::addNumber(int number){
	container.push_back(number);
}
void vectorsoo::removeNumber(int number){
	vector<int>::iterator toRemove = container.begin();
	for (vector<int>::iterator ip = toRemove; ip != container.end(); ++ip){
		if (*ip == number)
			toRemove = ip;
	}
	container.erase(toRemove);
}
void vectorsoo::output(void){
	sort(container.begin(), container.end());
	for (vector<int>::iterator ip = container.begin();
		ip != container.end(); ++ip){
		cout << *ip << " ";
	}
	cout << endl;
}