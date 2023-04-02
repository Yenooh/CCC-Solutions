#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	int counter = 2;
	cin >> a;
	cin >> b;
	while (true) {
		c = a - b;
		if (c <= b) {
			counter++;
		}
		if (c > b) {
			counter++;
			break;
		}
		a = b;
		b = c;
	}
	cout << counter;
	return 0;
}
