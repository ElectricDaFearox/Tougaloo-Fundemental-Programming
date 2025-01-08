#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // Find the greatest number
    int greatest = num1; // Assume first number is greatest

    if (num2 > greatest) {
        greatest = num2; // If second number is greater, update greatest
    }

    if (num3 > greatest) {
        greatest = num3; // If third number is greater, update greatest
    }

    // Output the result
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
