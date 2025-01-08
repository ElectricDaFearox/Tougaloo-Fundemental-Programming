#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter integers to add: ";

    while (true) {
        cin >> number;
        if (number == 0) {  
            break;
        }
        sum += number;
    }

    cout << "The sum is: " << sum << endl;
    return 0;
}
