// Brainstorming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	double temp1, temp2, temp3, temp4, temp5, avgTemp;

	cout << "Enter the first temperature" << endl;
	cin >> temp1;

	cout << "Enter the second temperature" << endl;
	cin >> temp2;

	cout << "Enter the third temperature" << endl;
	cin >> temp3;

	cout << "Enter the fourth temperature" << endl;
	cin >> temp4;

	cout << "Enter the fifth temperature" << endl;
	cin >> temp5;

	avgTemp = (temp1 + temp2 + temp3 + temp4 + temp5) / 5;

	cout << "The average temperature is " << avgTemp << endl;

	return 0;
}