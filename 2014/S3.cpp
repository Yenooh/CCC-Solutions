#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	int counter = 1;
	cin >> n;
	vector<int> mount(n);
	vector<int> branch;
	for(int i = 0; i < n; i++){
		cin >> mount[i];
	}
	while(mount.size() > 0){
		if(mount[mount.size()-1] == counter){
			counter++;
			mount.pop_back();
		}
		else if(branch.size() > 0 && branch[branch.size()-1] == counter){
			counter++;
			branch.pop_back();
		}
		else{
			branch.push_back(mount[mount.size()-1]);
			mount.pop_back();
		}
	}
	int size = branch.size();
	while(size--){
		if(branch[branch.size()-1] == counter){
			branch.pop_back();
			counter++;
		}
		else{
			break;
		}
	}
	if(counter >= n){
		cout << 'Y' << endl;
	}
	else{
		cout << 'N' << endl;
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
