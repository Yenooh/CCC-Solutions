#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	double inp;
	double area = 0;
	double total = 0;
	int fences;
	vector<double> y;
	vector<double> x;
	cin >> fences;
	for (int i = 0; i < fences+1; i++) {
		cin >> inp;
		y.push_back(inp);
	}
	for (int i = 0; i < fences; i++) {
		cin >> inp;
		x.push_back(inp);
	}
	for (int i = 0; i < fences; i++) {
		area = (x[i] * (y[i] + y[i + 1])) / 2;
		total = total + area;
	}
	cout << fixed << total;
	
	return 0;
}
