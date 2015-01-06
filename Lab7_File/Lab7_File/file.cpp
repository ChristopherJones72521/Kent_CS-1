// Author: Christopher Jones
// Project: Lab7_File
// Description: A program takes check information from a txt file and prints the check.
// Second verse, same as the first!
// Date: 10/25/2014
// Course: CS-1 13005

#include "file.h"

void write_check(string date, string name, int* dollars, int* cents, string payee)
{
	int length_of_longest_string = 0;
	string line1 = name,
		line2 = "Pay to: " + payee,
		line3 = number_spell(dollars) + " and " + cents + "/100";
	if (line1.length() < line2.length())
		if (line2.length() < line3.length())
			length_of_longest_string = line3.length();
		else
			length_of_longest_string = line2.length();
	else if (line1.length() < line3.length())
		length_of_longest_string = line3.length();
	else
		length_of_longest_string = line1.length();
	// How is this unsigned?
	while (line1.length() < length_of_longest_string)
		line1 += ' ';
	// and this
	while (line2.length() < length_of_longest_string)
		line2 += ' ';
	// and this...
	while (line3.length() < length_of_longest_string)
		line3 += ' ';

	fout << line1 << "\t\t" << date << endl
		<< line2 << "\t\t$" << dollars << '.' << cents << endl
		<< line3 << "\t\t" << "dollars" << endl;
}

// Number Spell Function
string number_spell(int* number)
{
	string tens, singles, output[2];

	for (int i = 0; i < 2; ++i) {
		switch (number[i])
			if (number[0] == 1)
			{
			switch (number[1])
			{
			case '0':
				singles = "Ten";
				break;
			case '1':
				singles = "Eleven";
				break;
			case '2':
				singles = "Twelve";
				break;
			case '3':
				singles = "Thirteen";
				break;
			case '4':
				singles = "Fourteen";
				break;
			case '5':
				singles = "Fifteen";
				break;
			case '6':
				singles = "Sixteen";
				break;
			case '7':
				singles = "Seventeen";
				break;
			case '8':
				singles = "Eighteen";
				break;
			case '9':
				singles = "Nineteen";
				break;
			}
			}
			else if (number[0] == 0) {
				switch (number[1])
				{
				case '0':
					singles = " ";
					break;
				case '1':
					singles = "one ";
					break;
				case '2':
					singles = "two ";
					break;
				case '3':
					singles = "three ";
					break;
				case '4':
					singles = "four ";
					break;
				case '5':
					singles = "five ";
					break;
				case '6':
					singles = "six ";
					break;
				case '7':
					singles = "seven ";
					break;
				case '8':
					singles = "eight ";
					break;
				case '9':
					singles = "nine ";
					break;
				}
			}
			else if (number[1] == 0) {
				switch (number[0]) {
				case '0':
					tens = "zero";
					break;
				case '2':
					tens = "twenty-";
					break;
				case '3':
					tens = "thirty-";
					break;
				case '4':
					tens = "forty-";
					break;
				case '5':
					tens = "fifty-";
					break;
				case '6':
					tens = "sixty-";
					break;
				case '7':
					tens = "seventy-";
					break;
				case '8':
					tens = "eighty-";
					break;
				case '9':
					tens = "ninety-";
					break;
				}
				if (number[0] == 0)
				{
					switch (number[1])
					{
					case '0':
						singles = "zero ";
						break;
					case '1':
						singles = "one ";
						break;
					case '2':
						singles = "two ";
						break;
					case '3':
						singles = "three ";
						break;
					case '4':
						singles = "four ";
						break;
					case '5':
						singles = "five ";
						break;
					case '6':
						singles = "six ";
						break;
					case '7':
						singles = "seven ";
						break;
					case '8':
						singles = "eight ";
						break;
					case '9':
						singles = "nine ";
						break;
					}

					if (i == 0)
						output[i] = tens;
					else
						output[i] = singles;
				}

				return tens + " " + singles;
			}

	}
}