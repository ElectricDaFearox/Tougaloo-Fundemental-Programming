#include <iostream>
using namespace std;

int main() {
    int veg_choice, fruit_choice, other_choice, veg_qty, fruit_qty, other_qty;
    double veg_cost = 0, fruit_cost = 0, other_cost = 0, subtotal, tax, total;

    // Display Vegetable options
    cout << "Select a vegetable: \n1. Cucumbers ($0.50 each)\n2. Butter Beans ($3.00 per lb)\n3. Onions ($0.20 each)\n4. Lettuce ($2.50 each)\n";
    cin >> veg_choice;

    if (veg_choice == 1) {
        cout << "Enter quantity of Cucumbers: ";
        cin >> veg_qty;
        veg_cost = veg_qty * 0.50;
    }
    else if (veg_choice == 2) {
        cout << "Enter quantity (in lbs) of Butter Beans: ";
        cin >> veg_qty;
        veg_cost = veg_qty * 3.00;
    }
    else if (veg_choice == 3) {
        cout << "Enter quantity of Onions: ";
        cin >> veg_qty;
        veg_cost = veg_qty * 0.20;
    }
    else if (veg_choice == 4) {
        cout << "Enter quantity of Lettuce: ";
        cin >> veg_qty;
        veg_cost = veg_qty * 2.50;
    }
    else {
        cout << "Invalid choice for vegetables!" << endl;
    }

    // Display Fruit options
    cout << "Select a fruit: \n1. Peaches ($0.75 each)\n2. Apples ($0.80 each)\n3. Grapes ($2.69 per lb)\n4. Tomatoes ($1.99 per lb)\n";
    cin >> fruit_choice;

    if (fruit_choice == 1) {
        cout << "Enter quantity of Peaches: ";
        cin >> fruit_qty;
        fruit_cost = fruit_qty * 0.75;
    }
    else if (fruit_choice == 2) {
        cout << "Enter quantity of Apples: ";
        cin >> fruit_qty;
        fruit_cost = fruit_qty * 0.80;
    }
    else if (fruit_choice == 3) {
        cout << "Enter quantity (in lbs) of Grapes: ";
        cin >> fruit_qty;
        fruit_cost = fruit_qty * 2.69;
    }
    else if (fruit_choice == 4) {
        cout << "Enter quantity (in lbs) of Tomatoes: ";
        cin >> fruit_qty;
        fruit_cost = fruit_qty * 1.99;
    }
    else {
        cout << "Invalid choice for fruits!" << endl;
    }

    // Display Other options
    cout << "Select an item from 'Other': \n1. Raw Honey ($2.50 per jar)\n2. Sugar ($3.50 for 5 lb bag)\n3. Jelly ($4.99 per jar)\n4. Peanuts ($0.99 per lb)\n";
    cin >> other_choice;

    if (other_choice == 1) {
        cout << "Enter quantity of Raw Honey (jars): ";
        cin >> other_qty;
        other_cost = other_qty * 2.50;
    }
    else if (other_choice == 2) {
        cout << "Enter quantity of Sugar (5 lb bags): ";
        cin >> other_qty;
        other_cost = other_qty * 3.50;
    }
    else if (other_choice == 3) {
        cout << "Enter quantity of Jelly (jars): ";
        cin >> other_qty;
        other_cost = other_qty * 4.99;
    }
    else if (other_choice == 4) {
        cout << "Enter quantity (in lbs) of Peanuts: ";
        cin >> other_qty;
        other_cost = other_qty * 0.99;
    }
    else {
        cout << "Invalid choice for 'Other' items!" << endl;
    }

    // Calculate subtotal, tax, and total
    subtotal = veg_cost + fruit_cost + other_cost;
    tax = subtotal * 0.07;  // 7% sales tax
    total = subtotal + tax;

    // Output the results
    cout << "Subtotal for Vegetables: $" << veg_cost << endl;
    cout << "Subtotal for Fruits: $" << fruit_cost << endl;
    cout << "Subtotal for Other items: $" << other_cost << endl;
    cout << "Total before tax: $" << subtotal << endl;
    cout << "Sales tax (7%): $" << tax << endl;
    cout << "Final total: $" << total << endl;

    return 0;
}
