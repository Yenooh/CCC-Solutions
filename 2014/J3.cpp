#include <iostream>
#include <string>

using namespace std;

bool multi;
int main() {
	int David = 100;
	int Ant = 100;
	int a;
	int b;
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> a >> b;
		if (a > b) {
			Ant = Ant - a;
		}
		if (a < b) {
			David = David - b;
		}
		if (a = b) {
			continue;
		}
	}
	cout << David << endl;
	cout << Ant << endl;
	return 0;
}
