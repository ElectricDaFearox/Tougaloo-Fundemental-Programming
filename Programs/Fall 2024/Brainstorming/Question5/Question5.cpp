#include <iostream>
using namespace std;

int main() {

	double hours, calories;

	cout << "Enter the amount of hours" << endl;
	cin >> hours;

	calories = hours / 350;

	cout << "The amount of calories burned per hour is " << calories << endl;

	return 0;
}