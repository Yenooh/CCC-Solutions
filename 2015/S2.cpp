#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int n, m, d;
	char c;
    cin >> n >> m;
    vector<char> jerseys(n);
    int counter=0;
    for (int i=0; i<n; i++) {
        cin >> jerseys[i];
    }
    for (int i=0; i<m; i++) {
        cin >> c >> d;
        d--;
        if (jerseys[d]==c || int(jerseys[d])<int(c)) {
            counter++;
            jerseys[d]='X';
        }
    }
    cout << counter;
	return 0;
}
