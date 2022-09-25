#include <iostream>
#include <string.h>
#include <string>
using namespace std;
string userInput[21];

int main() {
	
	cout << "enter one word wnat length is less then 20 symphols" << endl;
	string userInput;
	cin >> userInput;
	
	if (userInput.length() <20)  {
		cout << "done" <<endl;
		
		
	}
	else {
		
		cout << "fail" << endl;
	}
	 
	
}
