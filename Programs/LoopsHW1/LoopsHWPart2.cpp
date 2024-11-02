#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number;

    cout << "Keep entering numbers. The program will stop when the sum is greater than 50." << endl;

    while (sum <= 50) {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;  
        cout << "Current sum: " << sum << endl;
    }

    cout << "The final sum is " << sum << ", which is greater than 50. Program terminated." << endl;

    return 0;
}
