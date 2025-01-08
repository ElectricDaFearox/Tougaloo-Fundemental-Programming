#include <iostream>
using namespace std;

// Prototype
void psquare(); 
void ptriangle(); 
void prectangle(); 

int main()
{
	// Function Calls
	ptriangle();
	psquare();
	prectangle();
	return 0;

}
void psquare()
{
	int p, s;
	cout << "Enter a value for s" << endl;
	cin >> s;

	p = 4 * s;
	cout << "Your value of the square is" << p << endl;

}
void ptriangle()
{
	int p, a, b, c;

	cout << "Enter a value for a" << endl;
	cin >> a;

	cout << "Enter a value for b" << endl;
	cin >> b;

	cout << "Enter a value for c" << endl;
	cin >> c;

	p = a + b + c;

	cout << "The Perimeter of the Triangle is: " << p << endl;

}
void prectangle()
{

	int p, l, w;

	cout << "Enter a value for length" << endl;
	cin >> l;

	cout << "Enter a value for width" << endl;
	cin >> w;

	p = 2 * l + 2 * w;

	cout << "Your total perimeter of the rectangle is: " << p << endl;


}