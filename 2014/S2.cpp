#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> row1;
	vector<string> row2;
	string inp;
	bool got = true;
	bool huh = true;
	for(int i = 0; i < n; i++){
		cin >> inp;
		row1.push_back(inp);
	}
	for(int i = 0; i < n; i++){
		cin >> inp;
		row2.push_back(inp);
	}
	for(int i = 0; i < n; i++){
		huh = true;
		for(int j = 0; j < n; j++){
			if(j == i){
				continue;
			}
			if(row1[i] == row2[j] && row2[i] == row1[j]){
				huh = false;
			}
		}
		if(huh == true){
			got = false;
		}
	}
	if(got == false){
		cout << "bad";
	}
	if(got == true){
		cout << "good";
	}
	
	return 0;
}
