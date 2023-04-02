#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<vector<int> > sizes(n, vector<int>(3));
	for(int i = 0; i < n; i++){
		cin >> sizes[i][0];
		cin >> sizes[i][1];
		cin >> sizes[i][2];
		sort(sizes[i].begin(), sizes[i].end());
	}
	cin >> m;
	vector<vector<int> > packages(m, vector<int>(3));
	for(int i = 0; i < m; i++){
		cin >> packages[i][0];
		cin >> packages[i][1];
		cin >> packages[i][2];
		sort(packages[i].begin(), packages[i].end());
	}
	for(int i = 0; i < m; i++){
		int bah = 1000000001;
		for(int j = 0;j < n; j++){
			if(packages[i][0] <= sizes[j][0] && packages[i][1] <= sizes[j][1] && packages[i][2] <= sizes[j][2]){
				bah = min(bah,sizes[j][0]*sizes[j][1]*sizes[j][2]);
			}
		}
		if(bah != 1000000001){	
			cout << bah << endl;
		}
		else{
			cout << "Item does not fit." << endl;
		}
	}
	return 0;
}
