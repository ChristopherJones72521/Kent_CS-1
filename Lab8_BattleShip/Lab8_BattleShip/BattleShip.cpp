//
//  battleship.cpp
//  CS 13001 section 005
//  Created by Christopher Jones on 11/11/14.
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//
// description: A simplified version of the Battleship guessing game

// Mikhail said not to alter the header file. Otherwise these would be in there.
#include "battleship.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	ship ships[FLEET_SIZE];
	location spot;
	int current;
	srand(time(NULL));
	initialize(ships);
	deploy(ships);
	do
	{
		spot = fire();
		current = check(ships, spot);
		if (current == -1)
			cout << "MISS!" << endl;
		else
			cout << "HIT!" << endl;
		sink(ships[current]);
	}
	while (operational(ships) == true);
	cout << "You Sunk all of the Battleships!" << endl;
}