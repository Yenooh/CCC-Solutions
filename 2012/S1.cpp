#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
    cin >> n;
    int ans = n-1;

    cout << ans*(ans-1)*(ans-2)/6;
	return 0;
}
