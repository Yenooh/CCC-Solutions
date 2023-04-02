#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	string inp;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		cin >> inp;
		for (int x = 0; x < inp.size(); x++) {
			counter++;
			if (inp[x] != inp[x + 1]) {
				cout << counter << ' ' << inp[x] << ' ';
				counter = 0;
			}
			else {
				continue;
			}
		}
		cout << endl;
	}
	return 0;
}
