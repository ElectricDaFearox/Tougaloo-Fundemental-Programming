#include <iostream>
using namespace std;

int main() {

	double loss, total;
	double went = 500;

	cout << "Enter how much money you lost" << endl;
	cin >> loss;

	total = went - loss;

	cout << "The total amount of money you have left is " << total << endl;

	return 0;
}