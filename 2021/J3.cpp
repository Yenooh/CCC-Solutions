#include <string>
#include <iostream>

using namespace std;

int main()
{
    int sum;
    string direction;
    string input;
    int arr[5];
    while (true) {
        cin >> input;
        if (input == "99999") {
            break;
        }
        for (int i = 0; i < input.size(); i++) {
            arr[i] = int(input[i] - 48);
        }
        sum = arr[0] + arr[1];
        if (sum % 2 != 0 && sum != 0) {
            direction = "left";
            cout << direction << " " << arr[2] << arr[3] << arr[4] << endl;
        }
        if (sum % 2 == 0 && sum != 0) {
            direction = "right";
            cout << direction << " " << arr[2] << arr[3] << arr[4] << endl;
        }
        if (sum == 0){
            cout << direction << " " << arr[2] << arr[3] << arr[4] << endl;
        }
    }
    return 0;
}
