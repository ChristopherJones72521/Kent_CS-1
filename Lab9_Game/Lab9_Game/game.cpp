//  Lab9_Game
//  game.cpp
//  CS 13001 section 005
//  Created by Christopher Jones on 11/17/14.
//  Copyright (c) 2014 Christopher Jones. All rights reserved.
//
// description: Implementation of Battleship Game with Classes

#include "battleship.h"
#include <iostream>
#include <ctime>

using std::cout; using std::cin; using std::endl; using std::ctime;


/// this is main function
int main()
{
	fleet myFleet;
	srand(time(NULL));
	myFleet.deployFleet();
	do
	{
		location shot;
		shot.fire();
		if (myFleet.isHitNSink(shot))
		{
			cout << "Hit!" << endl;
		}
		else
			cout << "Miss!" << endl;
	} while (myFleet.operational());
	cout << "You sunk all of the Battleships!" << endl;
}