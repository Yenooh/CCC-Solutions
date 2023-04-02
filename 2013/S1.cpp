#include <iostream>
#include <string>
using namespace std;

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        string yes = to_string(y);
        bool check = true;
        for (int i = 0; i < yes.size(); i++) {
            for (int j = i + 1; j < yes.size(); j++) {
                if (yes[i] == yes[j]) {
                    check = false;
                }
            }
        }
        if (check == true) {
            cout << yes << endl;
            return 0;
        }
    }
}
