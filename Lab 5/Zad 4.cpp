#include <iostream>
#include <cstdlib>
using namespace std;

class Wspolrzedne
{
public:
	int x;
	int y;
	int z;

	friend istream & operator >> (istream & wejscie, Wspolrzedne & p)
	{
		cout << "Podaj x: ";
		wejscie >> p.x;
		cout << "Podaj y: ";
		wejscie >> p.y;
		cout << "Podaj z: ";
		wejscie >> p.z;
		return wejscie;
	}

	friend ostream & operator<<(ostream & wypisz, Wspolrzedne & p)
	{
		wypisz << "Wspolrzedne punktu (x, y, z): ";
		wypisz << "(" << p.x << ", " << p.y << ", " << p.z << ")" << endl;
		return wypisz;
	}

	bool operator== (const Wspolrzedne & d)
	{
		if ((x == d.x) && (y == d.y) && (z == d.z))
			return true;
		else
			return false;
	}
	bool operator!= (const Wspolrzedne & d)
	{
		if ((x != d.x) || (y != d.y) || (z != d.z))
			return true;
		else
			return false;
	}
};

int main()
{
	Wspolrzedne wektor_1, wektor_2;

	cin >> wektor_1;
	cout << "Wektor 1: " << wektor_1 << endl;
	cin >> wektor_2;
	cout << "Wektor 2: " << wektor_2 << endl;
	cout << "Wniosek: ";
	if (wektor_1 == wektor_2)
	{
		cout << "wektory sa rowne. " << endl;
	}
	else
	{
		cout << "wektory nie sa rowne. " << endl;
	}

	system("Pause");
	return 0;
}
