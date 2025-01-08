#include <iostream>
using namespace std;

int main() {
    char isStudent, isFemale;
    double mealCost, discount = 0.0;

    cout << "Enter the cost of the meal: $";
    cin >> mealCost;

 
    cout << "Are you a full-time student? (y/n): ";
    cin >> isStudent;

    
    cout << "Are you female? (y/n): ";
    cin >> isFemale;

    
    if (isStudent == 'y' || isStudent == 'Y') {
        
        discount = 0.20;

        if (isFemale == 'y' || isFemale == 'Y') {
            
            discount += 0.05;
        }
    }

    double finalCost = mealCost * (1 - discount);


    cout << "The final cost of the meal is: $" << finalCost << endl;

    return 0;
}
