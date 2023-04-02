#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int n;
	int counter = 0;
	cin >> n;
	char inp;
	vector<char> guess;
	vector<char> answer;
	for(int i = 0; i < n; i++){
		cin >> inp;
		guess.push_back(inp);
	}
	for(int i = 0; i < n; i++){
		cin >> inp;
		answer.push_back(inp);
	}
	for(int i = 0; i < n; i++){
		if (guess[i] == answer[i]){
			counter++;
		}
	}
	cout << counter;
	return 0;
}
