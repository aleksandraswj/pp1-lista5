// Prog4_2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double srednia(unsigned int n, const int tab[])
{
	double suma = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		suma += tab[i];
	}
	return suma / n;
}

int main()
{
	int tab[3] = { 1, 2, 3 };
	cout << srednia(3, tab) << endl;
}