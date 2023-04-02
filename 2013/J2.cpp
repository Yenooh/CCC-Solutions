#include <iostream>
#include <string>

using namespace std;

int main() {
    string i;
    cin >> i;
    bool check = true;
    for (int x = 0; x < i.size(); x++) {
        if (i[x] != 'I' && i[x] != 'O' && i[x] != 'S' && i[x] != 'H' && i[x] != 'Z' && i[x] != 'X' && i[x] != 'N') {
            check = false;
            break;
        }
    }
    if (check == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
