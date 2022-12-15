#ifndef HLAVICKOVY_SOUBOR_H
#define HLAVICKOVY_SOUBOR_H

#include <cmath> 

int geometrickaPosloupnost(int n, int a1, int a2) {
	int q = a2 / a1;
	return a1 * pow(q, n - 1);
}

int soucetPosloupnosti(int n, int a1, int a2) {
	int q = a2 / a1;
	return a1 * (1 - pow(q, n)) / (1 - q);
}


#endif