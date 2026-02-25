// Feburary 25th 2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

	float pi1 = 3.14;
	float pi2 = 3.1415;
	float e = .01;

	if (abs(pi1-pi2) < e)
	{
		cout << "More Pie";
	}

	float b = 1.2;
	float manyB = 2.985984;

	b = b * b * b * b * b * b;
	cout <<endl << b;
	cout << endl << manyB;

	if (abs(b-manyB)<.000001)
	{
		cout << "It should get here";
	}




	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
