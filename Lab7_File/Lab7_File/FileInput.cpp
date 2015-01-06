// Author: Christopher Jones
// Project: Lab7_Check
// Description: A program that takes check information from a database file and prints the check.
// Alert: The NSA has not reviewed this code
// Date: 10/25/2014
// Course: CS-1 13005

#include "file.h"

int main()
{
	string date, name, payee, str_dollars, str_cents;
	int dollars = atoi(str_dollars.c_str());
	int cents = atoi(str_cents.c_str());

	// opening database.txt

	fin.open("database.txt");
	if (fin.fail())
	{
		cout << "Unable to open file database.txt \n";
		exit(0);
	}

	fout.open("check.txt");
	if (fout.fail())
	{
		cout << "Unable to open file check.txt \n";
		exit(0);
	}

	// declare array check 
	string check[13];

	// cout << "Please enter the following check information:\nDate: ";
	
	// indexing the values
	string input_file[13];
	for (int i = 0; i < 13; i++) {
		fin >> check[i];
	}
	
	date = check[1];
	name = check[3], check[4];
	str_dollars = check[7];
	str_cents = check[8], check[9];
	payee = check[11], check[12];

	fout << endl << endl << "Your Check:" << endl << endl;

	write_check(date, name, dollars, cents, payee); 

	return 0;
}