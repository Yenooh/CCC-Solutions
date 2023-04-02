#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int sum = 0;
	vector<int> a;
	int n;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n != 0) {
			a.push_back(n);
		}
		if (n == 0) {
			a.pop_back();
		}
	}
	if (a.size() == 0) {
		cout << 0;
	}
	if (a.size() == 1) {
		cout << a[0];
	}
	if (a.size() > 1) {
		for (int i = 0; i < a.size(); i++) {
			sum = sum + a[i];
		}
		cout << sum;
	}
	return 0;
}
