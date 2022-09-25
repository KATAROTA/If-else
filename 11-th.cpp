#include <iostream>
using namespace std;

int main() {
	int a =0;
	int b =0;
	int c =0;
	cout << "enter 3 numbers" << endl;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a>b) 
	{
		if (a>c) {
			cout << a << endl;
		}
		else {
			cout << c << endl;
		}
	}
	else {
		if (b>c) {
			cout << b <<endl;
		}
		else {
			cout << c << endl;
		}
	}
		
	
	
	return 0;
	
}
