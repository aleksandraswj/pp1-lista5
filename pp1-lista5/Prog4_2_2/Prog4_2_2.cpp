// Prog4_2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
#define ARRAY_SIZE(tab) sizeof(tab)/sizeof(tab[0])
double srednia(unsigned int n, int tab[])
{
	double suma = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		suma += tab[i];
	}
	return suma / n;
}

int suma(unsigned int n, int tab[])
{
	int suma = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		suma += tab[i];
	}
	return suma;
}

int sumaKwadratow(unsigned int n, int tab[])
{
	int suma = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		suma += tab[i] * tab[i];
	}
	return suma;
}

int main()
{
	int tab[3] = { 1, -2, 3 };
	cout << srednia(ARRAY_SIZE(tab), tab) << endl;
	cout << suma(ARRAY_SIZE(tab), tab) << endl;
	cout << sumaKwadratow(ARRAY_SIZE(tab), tab) << endl;
}	