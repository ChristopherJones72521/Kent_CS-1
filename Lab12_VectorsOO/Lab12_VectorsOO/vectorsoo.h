//  Lab12_VectorsProc
//  vectorsoo.h
//  CS 13001 section 005
//  Created by Christopher Jones 
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//

// variable size container class implemented with vectors
// Mikhail Nesterenko
// 11/07/2009


#ifndef VECTORSOO_H_
#define VECTORSOO_H_

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class vectorsoo{
public:
	void addNumber(int);    // adds number to the array
	void removeNumber(int); // deletes the number from the array
	void output(void);  // prints the values of the array in sorted order

	int vectorSize(void)const; // returns vector size

	// note that the big three member functions are not needed
	// as vector class handles dynamic allocation properly 
	// by itself

private:
	vector<int> container;
};

#endif /* VECTORSOO_H_ */
