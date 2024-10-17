#include <iostream>
using namespace std;

int main() {
    int age;
    double mealCost, discount = 3.00, totalCost;

    // Get the customer's age
    cout << "Enter your age: ";
    cin >> age;

    // Get the meal cost
    cout << "Enter the cost of your meal: $";
    cin >> mealCost;

    // Check if the customer is a senior citizen
    if (age >= 65) {
        totalCost = mealCost - discount;
        cout << "You qualify for the senior discount of $3.00.\n";
    }
    else {
        totalCost = mealCost;
        cout << "You do not qualify for the senior discount.\n";
    }

    // Output the total cost after discount (if any)
    cout << "Your total cost is: $" << totalCost << endl;

    return 0;
}
