#include <iostream>
using namespace std;

int main() {

	double meat, veggie, dessert, itemCost, totalCost, drate;
	double saleTax = 0.7;

	cout << "Input the cost of your meat" << endl;
	cin >> meat;

	cout << "Input the cost of your veggies" << endl;
	cin >> veggie;

	cout << "Input the cost of your desserts!" << endl;
	cin >> dessert;

	itemCost = meat + veggie + dessert;
	drate = itemCost * saleTax;
	totalCost = meat + veggie + dessert + drate;

	cout << "Your final cost is $" << totalCost << endl;


	return 0;
}