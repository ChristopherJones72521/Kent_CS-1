// 
// Super happy funtime American programming project                                                        
// Copywrite Christopher Jones 2014 (C)                                                                    
//                                                                                                         

#include <iostream>                                                                                        
#include <vector>                                                                                                                                                                                    

using namespace std;                                                                                       

int main(){
	
		
	vector<int> myVector;

	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(6);

	cout << "Vector: ";

	for (unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << ' ';
	}

	cout << endl;

	// begin insert function

	myVector.insert(myVector.begin() + 3, 666);

	cout << "Vector: ";

	for (unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << ' ';
	}

	cout << endl;

	// begin erase function

	myVector.erase(myVector.begin() +4);

	cout << "Vector: ";

	for (unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << ' ';
	}

	myVector.clear();

	if (myVector.empty()){
		cout << endl << "Is Empty!";
	}
	else {
		cout << endl << "Is not empty!"; 
	}
	cout << endl;
		
		return 0;                                                                                                  
}