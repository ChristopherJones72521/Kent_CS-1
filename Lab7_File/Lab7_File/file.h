// Author: Christopher Jones
// Date: 11/02/2014
// Name: Lab7_File
// Desc: Whelp, insult to injury I guess...
// CS-13005


// protects against multiple inclusion

#ifndef check_H
#define check_H

// more inclusions

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <sstream>

using namespace std;

// input / output file stream declaration

ifstream fin; // input stream
ofstream fout; // output stream

// function prototypes defined here

void write_check(string date, string name, int* dollars, int* cents, string payee);
string number_spell(int* number);

#endif
