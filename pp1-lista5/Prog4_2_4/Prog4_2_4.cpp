// Prog4_2_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double sredniaGeometryczna(unsigned int n, const int tab[])
{
	double iloczyn = 1;
	for (unsigned int i = 0; i < n; i++)
	{
		iloczyn *= tab[i];
	}
	return pow(iloczyn, 1.0 / n);	
}

int main()
{
	int tab[3] = { 1, 2, 3 };
	cout << sredniaGeometryczna(3, tab) << endl;
}

