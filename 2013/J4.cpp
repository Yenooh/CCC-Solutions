#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int num = 0;
	int total = 0;
	int mins;
	cin >> mins;
	int n;
	cin >> n;
	vector<int> chores;
	int inp;
	for (int i = 0; i < n; i++) {
		cin >> inp;
		chores.push_back(inp);
	}
	sort(chores.begin(), chores.end());
	for (int i = 0; i < n; i++) {
		total = total + chores[i];
		if (total > mins) {
			break;
		}
		num++;
	}
	cout << num;
	return 0;
}
