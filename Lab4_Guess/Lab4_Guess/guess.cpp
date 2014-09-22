
/* Author: Christopher Jones
* Date: 9/16/2014
* Name: Lab4_Guess
* This program is a guessing game using a randomly generated value
* CS - 13005
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); // random value selection for guessing game, 
					   // using time to ensure a differnt value every second

	int guess,
		random_number = rand() % 100;
	cout << "I selected a number between 0 and 99, what it is?" << endl;

	do {
		cin >> guess;
		// do-while loop will continue to run until guess is equal to the random value
		if (guess < random_number)
			cout << "wrong, it is larger, what is it? ";
		else if (guess > random_number)
			cout << "wrong, it is smaller, what is it ";
		else
			cout << "correct!";

	} while (guess != random_number);

	return 0;
}
