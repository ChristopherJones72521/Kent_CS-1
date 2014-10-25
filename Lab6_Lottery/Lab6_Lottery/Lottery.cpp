/* Author: Christopher Jones
* Date: 10/12/2014
* Project: Lab6_Lottery
* Professor: Mikhail Nesterenko
* Description: 10 random non-repeating positive numbers (the lottery numbers),
* takes a single input from the user and checks the input with the
* ten lottery numbers.
* Class: CS13005
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// initializes the array by user input
void initialize(int[]);
void entry(int&);
void draw(int[]);
bool check(int, int[]);
bool win(int, int[]);

int main(){
	int guess, wins[10];
	initialize(wins);
	draw(wins);
	entry(guess);
	if (win(guess, wins) == true)
		cout << "You are the winner!" << endl;
	else
		cout << "Loser! The lottery is a tax on people who are bad at math!" << endl;
	cout << "The winning numbers were" << endl;
	for (int p = 0; p < 9; p++)
		cout << wins[p] << ",";
	cout << " Your guess was " << guess << ".\n";

}

// fills upt the array a of "size"
void initialize(int wins[]) {
	for (int i = 0; i < 10; ++i)
		wins[i] = -1;
}

/* Assigns random values to the array "wins"
void assign() {
for (int i = 0; i < size; i++)
wins[i] = rand() % size;
}
*/

// Draws a number between 0 and 100
void draw(int wins[]){
	srand(time(NULL));
	for (int n = 0; n < 10; n++) {
		wins[n] = rand() % 100;
		if (check(n, wins) == false)
			wins[n] = rand() % 100;
	}
}

// Function definition for entry 
void entry(int& guess) {
	cout << "Please guess a number (you could be the big winner)" << endl;
	cin >> guess;
}

// checks if the value generated has been generated to prevent duplicates
bool check(int on, int wins[]) {
	for (int k = 0; k < on; k++){
		if (wins[on] == wins[k])
			return false;
	}
	return true;
}

// Checks for winners!
bool win(int guess, int wins[]){
	for (int p = 0; p < 10; p++){
		if (guess == wins[p])
			return true;
	}
	return false;
}

