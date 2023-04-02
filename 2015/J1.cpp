#include <iostream>
#include <string>

using namespace std;

int main() {
	int date;
	int month;
	cin >> month;
	cin >> date;
	if (month == 2 && date == 18) {
		cout << "Special";
	}
	if (month == 2 && date < 18) {
		cout << "Before";
	}
	if (month == 2 && date > 18) {
		cout << "After";
	}
	if (month < 2) {
		cout << "Before";
	}
	if (month > 2) {
		cout << "After";
	}
	return 0;
}
