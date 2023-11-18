// Prog4_2_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void sumaTablic(int n, const int tab1[], const int tab2[], int tab3[])
{
	for (int i = 0; i < n; i++)
	{
		tab3[i] = tab1[i] + tab2[i];
	}
}

void wiekszyElement(int n, const int tab1[], const int tab2[], int tab3[])
{
	for (int i = 0; i < n; i++)
	{
		if (tab1[i] > tab2[i])
		{
			tab3[i] = tab1[i];
		}
		else
		{
			tab3[i] = tab2[i];
		}
	}
}

void zamianaTablic(int n, int tab1[], int tab2[], int tab3[])
{
	for (int i = 0; i < n; i++)
	{
		int eltab1 = tab1[i];	
		tab1[i] = tab3[i];
		tab3[i] = tab2[i];	
		tab2[i] = eltab1;
	}
}

void wypiszTablice(string nazwa, int tab[], unsigned int n)
{
	cout << nazwa << endl;	
	for (unsigned int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
}

int main()
{
	const unsigned int rozmiar = 5;
	int tab1[rozmiar] = { 10, 12, 3, 4, 5 };
	int tab2[rozmiar] = { 6, 7, 8, 9, 10 };
	int tab3[rozmiar] = { 0, 0, 0, 0, 0 };
	wypiszTablice("Tablica 1", tab1, rozmiar);
	wypiszTablice("Tablica 2", tab2, rozmiar);
	wypiszTablice("Tablica 3", tab3, rozmiar);

	sumaTablic(5, tab1, tab2, tab3);
	wypiszTablice("Tablica 3", tab3, rozmiar);
	
	wiekszyElement(5, tab1, tab2, tab3);
	wypiszTablice("Tablica 3", tab3, rozmiar);

	zamianaTablic(5, tab1, tab2, tab3);
	wypiszTablice("Tablica 1", tab1, rozmiar);
	wypiszTablice("Tablica 2", tab2, rozmiar);
	wypiszTablice("Tablica 3", tab3, rozmiar);
}

