/* Author: Christopher Jones
* Date: 9/16/2014
* Name: Lab5 - Basal Metabolic Rate Study
* This program calculates the BMR and number of bagels a person can consume in a day
* CS - 13005
*/

#include <cmath> 
#include <iostream> 
#include <string>

using namespace std;

int main()
{
	char gender;
	int weight, feet, inches, height, age;
	double bmrWomen, bmrMen, result;

	cout << "BMI Calculator.\nPlease enter your Gender. (M or F?)" << endl;
	cin >> gender;
	cout << "How much do you weigh (in pounds)?" << endl;
	cin >> weight;
	cout << "How many feet tall are you?" << endl;
	cin >> feet;
	cout << "How many additional inches tall are you?" << endl;
	cin >> inches;
	cout << "What is your age (don't worry I won't tell anyone.)" << endl;
	cin >> age;

	height = (feet * 12) + inches;

	if (gender == 'm') {
		bmrMen = (weight, height, age);
		result = (66 + (6.3 * weight) + (12.9 * height) - (6.8 * age));
	}
	else
	{
		bmrWomen = (weight, height, age);
		result = (655 + (4.3 * weight) + (4.7 * height) - (4.7 * age));
	}

	cout << "Your Basal Metabolic Rate is:" << result << endl;

	cout << "Press enter to exit..." << endl;
	cin.get();
	return 0;
}