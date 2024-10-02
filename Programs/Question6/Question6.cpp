#include <iostream>
using namespace std;

int main() {

	double hours, wage, pay;

	cout << "Enter your wage" << endl;
	cin >> wage;

	cout << "Enter the hours you worked" << endl;
	cin >> hours;

	pay = wage * hours;

	cout << "Your hourly wage is " << pay << endl;

	return 0;
}