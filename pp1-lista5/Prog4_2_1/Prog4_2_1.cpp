// Prog4_2_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;    

void zerujTablice(int n, int tab[])
{
	memset(tab, 0, n * sizeof(int));	// zerowanie tablicy	
}
void wpiszIndeksy(int n, int tab[])
{
	for (int i = 0; i < n; i++)
	{
		tab[i] = i;
	}
}
void podwojWartosci(int n, int tab[])
{
	for (int i = 0; i < n; i++)
	{
		tab[i] *= 2;
	}
}	

void ustalWartosciBezwzgledne(int n, int tab[])
{
	for (int i = 0; i < n; i++)
	{
		tab[i] = abs(tab[i]);
	}
}

void wypiszTablice(int n, int tab[])
{
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;	
}

int main()
{
	fdgyfyugfguiygu
	int tab[10] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };	
    wypiszTablice(10, tab);	
	ustalWartosciBezwzgledne(10, tab);
	wypiszTablice(10, tab);
	zerujTablice(10, tab);	
	wypiszTablice(10, tab);	
	wpiszIndeksy(10, tab);	
	wypiszTablice(10, tab);	
	podwojWartosci(10, tab);	
	wypiszTablice(10, tab);	

}

