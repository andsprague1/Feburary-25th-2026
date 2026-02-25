// Feburary 25th 2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//
	string weather;
	cout << "What's the weather?";
	cin >> weather;
	
	float temp;
	cout << "What is the temperature?";
	cin >> temp;
	
	if (weather == "Sunny")
	{
		if (temp > 78)
		{
			cout << "It's Bright out. Beach weather!\n";
		}
		else
		{
			cout << "Maybe don't got to the beach today";
		}
	}
	else
	{
		cout << "It's not clear out.\n";

		if (weather == "Rainy")
		{
			cout << "It's raining. Get your galoshes\n";
		}
		else 
		{
			cout << "Not raining though";
		}
	}
	cout << "And that's the Weather";
	


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
