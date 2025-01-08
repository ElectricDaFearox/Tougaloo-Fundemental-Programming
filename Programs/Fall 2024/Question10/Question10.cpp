#include <iostream>
using namespace std;

int main() {

	double money, wonMoney, total;

	cout<<"Enter your money now" << endl;
	cin >> money;

	total = money * 3;
	wonMoney = total - money;

	cout << "Congrats! You have gotten " << wonMoney << " dollars more!" << endl;

	return 0;
}