// Prog4_2_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Prog4_2_6.h"

using namespace std;

void przepisanieZawartosciTablicy(const int tab1[], int tab2[], unsigned int n)
{
	memcpy(tab2, tab1, n * sizeof(int));
}

void przepisanieOdwrotnosciTablicy(const int tab1[], int tab2[], unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		tab2[i] = tab1[n - 1 - i];
	}
}

void wypiszTablice(int tab[], unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
}

int main()
{
	const unsigned int rozmiar = 3;
	int tab1[rozmiar] = { 1, 2, 3 };
	int tab2[rozmiar];
	przepisanieZawartosciTablicy(tab1, tab2, rozmiar);
	wypiszTablice(tab2, rozmiar);
	cout << endl;
	przepisanieOdwrotnosciTablicy(tab1, tab2, rozmiar);
	wypiszTablice(tab2, rozmiar);
	cout << endl;
}