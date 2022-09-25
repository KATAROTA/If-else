#include <iostream>

using namespace std;


int main() {
	cout << "enter 2 int nubmers" << endl;
	int num1 =0;
	int num2 =0;
	
	cin >> num1 >> num2;
	
	cout << "enter p if u want get sum and enter else if u want to get times" << endl;
	
	char userSelect;
	cin >> userSelect;
	 
	if (userSelect == 'p'){
		
		cout<< num1+num2;
		
	}
	else{
		cout<< num1*num2;
	}
	
	
	
	return 0;
}
