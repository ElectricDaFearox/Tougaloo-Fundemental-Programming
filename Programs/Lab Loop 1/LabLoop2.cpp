#include <iostream>
using namespace std;

int main() {
    const int numItems = 3; 
    double totalCost = 0.0;
    double salesTaxRate = 0.07;
    char itemChoice;
    double price;


    cout << "Welcome to the vegetable shop! Choose from the following items:\n";
    cout << "A. Cucumbers - $0.50 each\n";
    cout << "B. Butter Beans - $3.00 per lb\n";
    cout << "C. Onions - $0.20 per lb\n";
    cout << "D. Lettuce - $2.50 each\n";


    for (int i = 1; i <= numItems; i++) {
        cout << "Enter the letter corresponding to the vegetable you want to purchase: ";
        cin >> itemChoice;

     
        switch (itemChoice) {
        case 'A':
        case 'a':
            price = 0.50;
            break;
        case 'B':
        case 'b':
            price = 3.00;
            break;
        case 'C':
        case 'c':
            price = 0.20;
            break;
        case 'D':
        case 'd':
            price = 2.50;
            break;
        default:
            cout << "Invalid selection. Please enter A, B, C, or D.\n";
            i--; 
            continue;
        }

        totalCost += price; 
    }

    double salesTax = totalCost * salesTaxRate;
    double finalCost = totalCost + salesTax;

    cout << "Total cost of items: $" << totalCost << endl;
    cout << "Sales tax (7%): $" << salesTax << endl;
    cout << "Final cost including tax: $" << finalCost << endl;

    return 0;
}
