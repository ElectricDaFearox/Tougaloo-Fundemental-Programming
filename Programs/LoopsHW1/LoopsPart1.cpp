#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number;

    cout << "Enter 10 numbers:" << endl;

    
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        sum += number;  
    }

    cout << "The sum of the 10 numbers is: " << sum << endl;

    return 0;
}
