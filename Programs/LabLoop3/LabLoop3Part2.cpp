#include <iostream>
using namespace std;

int main() {
    int age, sum = 0;
    cout << "Enter the ages of students (enter -1 to stop): ";

    while (true) {
        cin >> age;

        if (age == -1) { 
            break;
        }

        if (age >= 0) {
            sum += age;
        }
        else {
            cout << "Invalid age. Please enter a non-negative number or -1 to stop." << endl;
        }
    }

    cout << "The sum of the ages is: " << sum << endl;
    return 0;
}
