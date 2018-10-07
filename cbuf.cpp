#include "header.h"


cbuf::cbuf() {
	tab = new int[n];
	p = q = tab;
	cnt = 0;
}


cbuf::~cbuf() {
	p = q = NULL;
	delete tab;
	tab = NULL;
}


void cbuf::input(int x) {
	if (cnt == n) {
		throw string("Bufor jest pelny. Nie mozna wstawic danych.");
	}
	else {
		*q = x;
		cnt++;
		if (q == tab + n - 1) {
			q = tab;
		}
		else {
			q++;
		}
	}
}


int cbuf::get() {
	int x;
	if (cnt == 0) {
		throw string("Bufor jest pusty. Nie mozna pobrac danych.");
	}
	else {
		x = *p;
		cnt--;
		if (p == tab + n - 1) {
			p = tab;
		}
		else {
			p++;
		}
	}
	return x;
}


char decyzja() {
	char c;

	cout << "Wybierz opcje:" << endl;
	cout << "    " << c1 << " - wprowadzenie liczby do bufora" << endl;
	cout << "    " << c2 << " - pobranie liczby z bufora" << endl;
	cout << "    " << cq << " - wyjscie z programu" << endl;
	cout << "Twoj wybor: ";
	cin >> c;
	
	return c;
}