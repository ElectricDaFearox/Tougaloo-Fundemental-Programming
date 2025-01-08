#include <iostream>
using namespace std;

int main() {

	double wage, newPay;
	double raise = 0.25;

	cout << "Enter your current wage" << endl;
	cin >> wage;

	newPay = wage + raise;

	cout << "Your new wage is " << newPay << endl;


	return 0;
}