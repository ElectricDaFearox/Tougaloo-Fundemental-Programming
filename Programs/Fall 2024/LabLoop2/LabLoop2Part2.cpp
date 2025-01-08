#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a number between 1 and 50: ";
        cin >> number;

        if (number < 1 || number > 50) {
            cout << "Invalid input. ";
        }
    } while (number < 1 || number > 50);

    cout << "You entered a valid number: " << number << endl;
    return 0;
}
