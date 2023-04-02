#include <iostream>
#include <string>

using namespace std;

int main() {
	int el;
    int n;
    int year;
    int month;
    int day;
    cin >> n;
    for (int i = 0; i < n; i++){
        el = 0;
        cin >> year >> month >> day;
        if (year < 1989){
            cout << "Yes" << endl;
            el = 1;
        }
        if (year == 1989 && month < 2){
            cout << "Yes" << endl;
            el = 1;
        }
        if (year == 1989 && month == 2 && day <= 27){
            cout << "Yes" << endl;
            el = 1;
        }
        if(el == 0) {
            cout << "No" << endl;
        }
    }
	return 0;
}
