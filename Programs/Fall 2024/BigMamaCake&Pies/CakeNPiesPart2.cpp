#include <iostream>
using namespace std;

int main() {
    int item_choice, cake_type;

    cout << "Enter '1' to purchase cake or '2' to purchase pie: ";
    cin >> item_choice;

    if (item_choice == 1) {
        cout << "Enter '1' for sheet cake or '2' for layered cake: ";
        cin >> cake_type;

        if (cake_type == 1) {
            cout << "You ordered a sheet cake." << endl;
        } else if (cake_type == 2) {
            cout << "You ordered a layered cake." << endl;
        } else {
            cout << "Invalid choice for cake type." << endl;
        }
    } else if (item_choice == 2) {
        cout << "You ordered a pie." << endl;
    } else {
        cout << "Invalid choice for item." << endl;
    }

    return 0;
}
