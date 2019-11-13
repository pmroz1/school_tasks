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

	friend bool operator== (const Wspolrzedne &, const Wspolrzedne &);
	friend bool operator!= (const Wspolrzedne &, const Wspolrzedne &);

};

bool operator == (const Wspolrzedne & o, const Wspolrzedne & p)
{
	if ((o.x == p.x) && (o.y == p.y) && (o.z == p.z))
		return true;
	else
		return false;
}
bool operator != (const Wspolrzedne & o, const Wspolrzedne & p)
{
	if ((o.x != p.x) || (o.y != p.y) || (o.z != p.z))
		return true;
	else
		return false;
}

int main(void)
{
	Wspolrzedne ex1, ex2;

	cin >> ex1;
	cout << ex1 << endl;
	cin >> ex2;
	cout << ex2 << endl;
	cout << "Wniosek: ";
	if (ex1 == ex2)
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

