//  
//  Lab11_VarArrayClasses
//  vararray.h
//  CS 13001 section 005
//  Created by Christopher Jones on 11/11/14.
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//


#ifndef VARARRAY_H_
#define VARARRAY_H_

#include <iostream>

using namespace std;

class varArray{
 public:
  varArray(); // void constructor
  int arraySize() const {return size;} // returns the size of the array

  int check(int number); // returns index of element containg "number" or -1 if none
  void addNumber(int);    // adds number to the array
  void removeNumber(int); // deletes the number from the array
  void output();      // prints the values of the array

  // big three
  varArray(const varArray&); // copy constructor
  varArray& operator=(const varArray&); // overloaded assignment
  ~varArray(); // destructor

 private:
  int *dArray; // pointer to the dynamically allocated array
  int size;   // array size
};

#endif /* VARARRAY_H_ */
