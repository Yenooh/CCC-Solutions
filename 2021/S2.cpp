#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    vector<int> row(m, 0);
    vector<int> column(n, 0);
    char inst;
    int num;
    for (int i = 0; i < k; i++){
        cin >> inst >> num;
        num--;
        if (inst == 'R'){
            row[num] += 1;
        }
        else{
            column[num] += 1;
        }
    }
    int gold = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if ( (row[i] + column[j]) % 2 == 1 ){
                gold += 1;
            }
        }
    }
    cout << gold;
	return 0;
}
