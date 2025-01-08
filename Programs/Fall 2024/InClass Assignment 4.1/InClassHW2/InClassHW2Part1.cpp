#include <iostream>
using namespace std;

int main() {

    int T1, T2, T3;

    cout << "Enter the score for Test 1: ";
    cin >> T1;

    cout << "Enter the score for Test 2: ";
    cin >> T2;

    cout << "Enter the score for Test 3: ";
    cin >> T3;

    int total = T1 + T2 + T3;

    if (total > 225) {
        cout << "You Pass" << endl;
    }
    else {
        cout << "Sorry you Failed" << endl;
    }

    return 0;
}
