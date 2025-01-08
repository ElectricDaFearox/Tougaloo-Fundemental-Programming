#include <iostream>
using namespace std;

int main() {
    char itemType, cakeType;
    double total;

    cout << "Enter 'c' for cake or 'p' for pie: ";
    cin >> itemType;

    if (itemType == 'c' || itemType == 'C') {
        cout << "Enter 's' for sheet cake or 'l' for layer cake: ";
        cin >> cakeType;

        if (cakeType == 's' || cakeType == 'S') {
            cout << "You ordered a sheet cake." << endl;

        } else if (cakeType == 'l' || cakeType == 'L') {
            cout << "You ordered a layer cake." << endl;
        } else {
       
            cout << "Invalid cake type." << endl;
        }
    } 

    else if (itemType == 'p' || itemType == 'P') {
        cout << "You ordered a pie." << endl;
    } 
    else {
        cout << "Invalid item type." << endl;
    }

    return 0;
}
