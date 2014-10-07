// Attempts to use swapping function in mini sort code
// William Komer
// Oct-6-2014

#include <iostream>

using std::cin; using std::cout; using std::endl;

void getNumbers(int&, int&, int&);//three int's from keyboard
void swap(int&, int&);//swaps all of the int's
void showResults(int, int, int);//outputs

int main(){
	int in1, in2, in3;
	getNumbers(in1, in2, in3);
	if (in1 > in2){ swap(in1, in2); };
	if (in1 > in3){ swap(in1, in3); };
	if (in2 > in3){ swap(in2, in3); };
	showResults(in1, in2, in3);
}

//gets the int's from the user
void getNumbers(int& in1, int& in2,int& in3){
	cout << "enter three integers";
	cin >> in1 >> in2 >> in3;
}

//orders the numbers in increasing order
void swap(int& left, int& right){
	int tmp;
	tmp = left;
	left = right;
	right = tmp;
}

//outputs parameters
void showResults(int outLeft,int outMid,int outRight){
	cout << outLeft << outMid << outRight << endl;
}
