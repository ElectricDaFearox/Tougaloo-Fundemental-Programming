#include <iostream>
using namespace std;

int main() {

	double length, width, area;

	cout << "Enter the length of the shape" << endl;
	cin >> length;

	cout << "Enter the width of the shape" << endl;
	cin >> width;

	area = length * width;

	cout << "The area of your shape is " << area << endl;

	return 0;
}