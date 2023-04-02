#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> tide;
	int inp;
	int middle;
	int huh;
	for(int i = 0; i < n; i++){
		cin >> inp;
		tide.push_back(inp);
	}
	sort(tide.begin(),tide.end());
	if(n%2 == 0){
		middle = (n/2);
		huh = middle;
		for(int i = middle-1; i >= 0; i--){
			cout << tide[i] << ' ' << tide[huh] << ' ';
			huh++;
		}
	}
	if(n%2 != 0){
		middle = n/2;
		huh = middle+1;
		for(int i = middle; i >=0; i--){
			if(i == 0){
				cout << tide[i];
				break;
			}
			cout << tide[i] << ' ' << tide[huh] << ' ';
			huh++;
		}
	}

	return 0;
}
