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

location pick()
{
	location tmp;
	int tmp2;
	tmp.x = rand() % 5+ 1;
	tmp2 = rand() % 5 + 1;
	switch (tmp2)
	{
	case 1:
		tmp.y = 'a';
		break;
	case 2:
		tmp.y = 'b';
		break;
	case 3:
		tmp.y = 'c';
		break;
	case 4:
		tmp.y = 'd';
		break;
	case 5:
		tmp.y = 'e';
	};
	return tmp;
};
location fire()
{
	location tmp;
	int x1;
	char y2;
	cout << "Choose your x-axis firing coordinate! (1 - 5):" << endl;
	cin >> x1;
	cout << "Choose your y-axis firing coordinate (a - e):" << endl;
	cin >> y2;
	tmp.x = x1;
	tmp.y = y2;
	return tmp;
}
void printShip(ship tmp)
{
	cout << "X Coordinate= " << tmp.loc.x << endl << "Y Coordinate= " << tmp.loc.y;
	if (tmp.sunk == false)
		cout << " Not Sunk " << endl;
	if (tmp.sunk == true)
		cout << " Sunk ship! " << endl;
}
bool match(ship tmp, location tmp2)
{
	if (tmp.loc.x == tmp2.x && tmp.loc.y == tmp2.y)
		return true;
	else
		return false;
}
void sink(ship& it)
{
	it.sunk = true;
}

bool operational(const ship ships[])
{
	if (ships[0].sunk == true && ships[1].sunk == true && ships[2].sunk == true && ships[3].sunk == true && ships[4].sunk == true)
		return false;
	else
		return true;
}

void initialize(ship ships[])
{
	for (int i = 0; i < 5; i++)
	{
		ships[i].loc.x = -1;
		ships[i].loc.y = -1;
	}

}
int check(const ship ships[], location tmploc)
{
	for (int l = 0; l < 5; l++)
	{
		if (ships[l].loc.x == tmploc.x)
			if (ships[l].loc.y == tmploc.y)
				return l;

	}
	return -1;
}
void deploy(ship ships[])
{
	for (int e = 0; e < 5; e++)
	{
		ships[e].loc = pick();
		ships[e].sunk = false;
	}
}
void printFleet(const ship ships[])
{
	for (int d = 0; d < 5; d++)
	{
		cout << ships[d].loc.x << " " << ships[d].loc.y;
		if (ships[d].sunk == true)
			cout << " Sunk ship! " << endl;
		else
			cout << " Not Sunk " << endl;
	}
}