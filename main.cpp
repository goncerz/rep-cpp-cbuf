#include "header.h"


int main() {
	cbuf cb;
	char c;
	int x, y;

	do {
		c = decyzja();
		
		if (c == c1) {
			cout << "Wprowadz liczbe do bufora: ";
			cin >> x;

			try {
				cb.input(x);
			}
			catch (string e) {
				cout << e << endl;
			}
		}
		else if (c == c2) {
			try {
				y = cb.get();
				cout << "Liczba pobrana z bufora: " << y << endl;
			}
			catch (string e) {
				cout << e << endl;
			}
		}
	}
	while (c != cq);

	return 0;
}