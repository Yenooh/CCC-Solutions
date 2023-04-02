#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool primeTime(int c){
	if(c == 0 || c ==1){
		return false;
	}
	for(int i = 2; i <= sqrt(c); i++){
		if(c%i == 0){
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	int a = 0, b, n;
	cin >> t;
	for (int i = 0; i < t; i++){
		a = 0;
		cin >> n;
		REDO:
		bool found = false;
		while(found == false){
			a++;
			if(primeTime(a)){
				found = true;
			}
		}
		b = 2*n - a;
		if(primeTime(b) == false){
			goto REDO;
		}
		if(n != (a+b)/2){
			goto REDO;
		}
		
		cout << a << ' ' << b << endl;
	}
	return 0;
}
