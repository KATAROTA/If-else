#include <iostream>
using namespace std;


int main() {
	
	enum daysOfTheWeek {
		monday =1, 
		tuesday,
		wednesday,
		thursday,
		friday,
		saturday,
		sunday
	};
	cout << "search why these days of the wwek was named" << endl;
	cout << "enter the day of the week" << endl;
	int day = monday;
	cin >> day;
	switch (day) {
		case monday: 
			cout << "monday - moon";
			break;
		case tuesday:
			cout << "tuesday - mars";
			break;
		case wednesday:
			cout << "wednesday - mercury";
			break;
		case thursday:
			cout << "thursday - Jupiter";
			break;
		case friday:
			cout << "Friday - Venus";
			break;
		case saturday:
			cout << "saturday - Saturn";
			break;
		case sunday:
			cout << "sunday - Sun";
		default:
			cout << "pshel otsuda";
			break;
		
	}
	
}
