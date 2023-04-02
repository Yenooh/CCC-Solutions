#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int t = 0;
	int s = 0;
	string in;
	for (int i = 0; i <= n; i++) {
		getline(cin,in);
		for (int x = 0; x < in.size(); x++) {
			if (in[x] == 's' || in[x] == 'S') {
				s++;
				continue;
			}
			if (in[x] == 't' || in[x] == 'T') {
				t++;
				continue;
			}

		}
	}
	if (s < t) {
		cout << "English";
	}
	if (s > t) {
		cout << "French";
	}
	if (s == t) {
		cout << "French";
	}
}
