#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	string inp;
	cin >> inp;
	vector<int> arab;
	vector<char> rom;
	vector<int> roman;
	int n = 0;
	int total = 0;
	for (int i = 0; i < inp.size(); i++) {
		if (i % 2 == 0 || i == 0) {
			arab.push_back(int(inp[i]) - 48);
		}
		if (i % 2 != 0) {
			rom.push_back(inp[i]);
		}
	}
	for (int i = 0; i < rom.size(); i++) {
		if (rom[i] == 'I') {
			roman.push_back(1);
		}
		if (rom[i] == 'V') {
			roman.push_back(5);
		}
		if (rom[i] == 'X') {
			roman.push_back(10);
		}
		if (rom[i] == 'L') {
			roman.push_back(50);
		}
		if (rom[i] == 'C') {
			roman.push_back(100);
		}
		if (rom[i] == 'D') {
			roman.push_back(500);
		}
		if (rom[i] == 'M') {
			roman.push_back(1000);
		}
	}
	for (int i = 0; i < roman.size(); i++) {
		if (i == (roman.size() - 1)) {
			n = roman[i] * arab[i];
		}
		else if (roman[i + 1] > roman[i]) {
			n = roman[i] * arab[i] * -1;
		}
		else if (roman[i + 1] <= roman[i]) {
			n = roman[i] * arab[i];
		}
		total = total + n;
	}
	cout << total;
	return 0;
}
