//
// A super Sandbox
//Copywrite Christopher Jones 2014 (c)
//

#include <iostream>
#include <string>

using std::cout; using std::endl; using std::cin;


class MyClass{
public:
	void set(int n){ data = n; }

	// friend function accepts two objects of MyClass
	friend bool greater(const MyClass&, const MyClass&);

private:
	int data;
};


// friend function can access the private members of two classes
bool greater(const MyClass& one, const MyClass& two){
	bool result;
	result = one.data > two.data;
	return result;
}



int main() {
	MyClass ob1, ob2;
	int input;

	cout << "input value for ob1: ";
	cin >> input;
	ob1.set(input);


	cout << "input value for ob2: ";
	cin >> input;
	ob2.set(input);

	if (greater(ob1, ob2))
		cout << "ob1 => ob2 \n";
	else
		cout << "ob1 <= ob2 \n";

}