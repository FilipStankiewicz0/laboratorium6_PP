// laboratorium6_PP.cpp


// ZADANIE 1 - do skonczenia zmienne lokalne
/* #include <iostream>
using namespace std;
int a = 20;
int b = 10;
void suma(int a, int b);

void suma(int a, int b) {
	cout << endl << a + b;
}

int main() {
	suma();
	int a = 1, b = 2;
	suma(a, b);
}
*/

// ZADANIE 2
/* #include <iostream>
using namespace std;
int tab[10];
int rozmiar = 10;
void usun();

void usun() {
	int x;
	cout << endl << "Podaj ktory element chcesz usunac (0-9): ";
	cin >> x;
	for (int i = x; i < rozmiar - 1; i++) {
		tab[i] = tab[i + 1];
	}
	cout << endl << "Tablica po usunieciu elementu:";
	for (int i = 0; i < rozmiar - 1; i++) {
		cout << " " << tab[i];
	}
}

int main() {
	for (int i = 0; i < rozmiar; i++) {
		cout << endl << "Podaj wartosc " << i + 1 << " elementu tablicy: ";
		cin >> tab[i];
	}
	cout << endl << "Tablica przed usunieciem elementu:";
	for (int i = 0; i < rozmiar; i++) {
		cout << " " << tab[i];
	}
	usun();
}
*/

// ZADANIE 3 - do skonczenia funkcja zapisz()
/* #include <iostream>
using namespace std;
float TEMP1[10];
float TEMP2[10];
int INDEKS = 0;
float przelicz();
float zapisz(float a);
void wyswietl();

float przelicz() {
	float podana_temp;
	podana_temp = TEMP1[INDEKS] + 273.15;
	return podana_temp;
}

float zapisz(float a) {
	TEMP2[INDEKS] = a;
	return 0;
}

void wyswietl() {
	cout << endl << endl << "Indeks\t\tCelsjusz\tKelvin";
		for (INDEKS = 0; INDEKS < 10; INDEKS++) {
		cout << endl << INDEKS + 1 << "\t\t" << TEMP1[INDEKS] << "\t\t" << TEMP2[INDEKS];
		}
}

int main() {
	float a;
	for (INDEKS = 0; INDEKS < 10; INDEKS++) {
		cout << endl << endl << "Podaj temperature w stopniach Celsjusza: ";
		cin >> TEMP1[INDEKS];
		a = przelicz();
		zapisz(a);
	}
	wyswietl();
}
*/