#include <iostream>
#include <cstdlib>
using namespace std;

class Ulamek
{
public:
	int licznik;
	int mianownik;
	Ulamek()
	{
		this->licznik = 0;
		this->mianownik = 0;
	}
	Ulamek(int licznik, int mianownik)
	{
		this->licznik = licznik;
		this->mianownik = mianownik;
	}

	friend istream & operator >> (istream & wejscie, Ulamek & p)
	{
		cout << "Podaj licznik: ";
		wejscie >> p.licznik;
		cout << "Podaj mianownik: ";
		wejscie >> p.mianownik;
		return wejscie;
	}

	friend ostream & operator<<(ostream & wypisz, Ulamek & p)
	{
		wypisz << "Ulamek" << endl;
		wypisz << p.licznik << "/" << p.mianownik << endl;
		return wypisz;
	}

	friend Ulamek operator* (const Ulamek &, const Ulamek &);
};

Ulamek operator* (const Ulamek & o, const Ulamek & p)
{
	return Ulamek(o.licznik * p.licznik, o.mianownik * p.mianownik);
}

int main()
{
	Ulamek ex1, ex2, ex3;

	cin >> ex1;
	cout << "Pierwszy ulamek: " << ex1 << endl;
	cin >> ex2;
	cout << "Drugi ulamek: " << ex2 << endl;

	ex3 = ex1 * ex2;
	cout << endl << "Wynik mnozenia: ";
	cout << ex3;

	system("Pause");
	return 0;
}