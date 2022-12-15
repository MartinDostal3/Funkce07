// Funkce07.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

#include "gp.h"
using namespace std;

int main()
{

	// Výpočet 5. členu geometrické posloupnosti s prvním a druhým členem 1 a 3
	cout << geometrickaPosloupnost(5, 1, 3) << endl; // Vypíše 3

	// Výpočet součtu prvních 10 členů geometrické posloupnosti s prvním a druhým členem 1 a 3
	cout << soucetPosloupnosti(10, 1, 3) << endl; // Vypíše 15

	return 0;
}

