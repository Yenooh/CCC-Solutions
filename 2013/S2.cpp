#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int w;
	int n;
	cin >> w >> n;
	int current = 0; 
	int carCount = 0;
	int keepLimit = 0;
	vector<int> cars;
	int inp;
	for(int i = 0; i < n; i++){
		cin >> inp;
		cars.push_back(inp);
	}
	for(int i = 0; i < n; i++){
		if(keepLimit < 4){
			current = current + cars[i];
		}
		
		if(keepLimit > 3){
			current = current - cars[i-4] + cars[i];
			keepLimit--;
		}
		keepLimit++;
		if(current > w){
			break;
		}
		carCount++;
	}
	cout << carCount;
	return 0;
}
