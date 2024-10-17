#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double carPrice, salesTax, totalCost;

    // Input: car price
    cout << "Enter the price of the car: $";
    cin >> carPrice;

    // Calculate sales tax based on the car price
    if (carPrice > 50000) {
        salesTax = carPrice * 0.15;  // 15% sales tax
    }
    else {
        salesTax = carPrice * 0.07;  // 7% sales tax
    }

    // Calculate total cost
    totalCost = carPrice + salesTax;

    // Output the result
    cout << "Sales tax: $" << salesTax << endl;
    cout << "Total cost of the car: $" << totalCost << endl;

    return 0;
}
