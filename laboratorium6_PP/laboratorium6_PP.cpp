// laboratorium6_PP.cpp
// FILIP STANKIEWICZ 170396

// ZADANIE 1
/* #include <iostream>
using namespace std;
int a = 20;
int b = 10;
void suma(int a, int b);

void suma(int a, int b) {
	cout << endl << a + b;
}

int main() {
	suma(a,b);
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
	cout << endl << "Podaj indeks elementu ktory chcesz usunac (0-9): ";
	cin >> x;
	for (int i = x; i < rozmiar - 1; i++) {
		tab[i] = tab[i + 1];
	}
	rozmiar--;
	cout << endl << "Tablica po usunieciu elementu:";
	for (int i = 0; i < rozmiar; i++) {
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
float przelicz(float podana);
void zapisz(float podana, float przeliczona);
void wyswietl();

float przelicz(float podana) {
	return podana + 273.15;
}

void zapisz(float podana, float przeliczona) {
	if (INDEKS >= 10) {
		cout << "Koniec miejsca w tablicy, przeliczenie nie zostanie zapisane. ";
		return;
	}
	TEMP1[INDEKS] = podana;
	TEMP2[INDEKS] = przeliczona;
	INDEKS++;
}

void wyswietl() {
	cout << endl << endl << "Indeks\t\tCelsjusz\tKelvin";
		for (int i = 0; i < INDEKS; i++) {
		cout << endl << i + 1 << "\t\t" << TEMP1[i] << "\t\t" << TEMP2[i];
		}
}

int main() {
	float przeliczona, podana;
	for (int i = 0; i < 10; i++) {
		cout << endl << "Podaj temperature w stopniach Celsjusza: ";
		cin >> podana;
		przeliczona = przelicz(podana);
		zapisz(podana, przeliczona);
	}
	wyswietl();
}
*/