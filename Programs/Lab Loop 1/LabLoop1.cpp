#include <iostream>
using namespace std;

int main() {
    const int numItems = 10; 
    double price, sum = 0.0;

    
    for (int i = 1; i <= numItems; i++) {
        cout << "Enter the price of item " << i << ": ";
        cin >> price;
        sum += price;
    }

  
    double average = sum / numItems;

    cout << "Total sum of prices: $" << sum << endl;
    cout << "Average price: $" << average << endl;

    return 0;
}
