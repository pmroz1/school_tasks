#include <iostream>
#include <cstdlib>
using namespace std;

class Wektor
{
public:
	double x;
	double y;
	Wektor()
	{
		this->x = 0;
		this->y = 0;
	}
	Wektor(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	friend istream & operator >> (istream & wejscie, Wektor & p)
	{
		cout << "Podaj x: ";
		wejscie >> p.x;
		cout << "Podaj y: ";
		wejscie >> p.y;
		return wejscie;
	}

	friend ostream & operator<<(ostream & wypisz, Wektor & p)
	{
		wypisz << "Wspolrzedne punktu (x, y): ";
		wypisz << "(" << p.x << ", " << p.y << ")" << endl;
		return wypisz;
	}

	Wektor operator+ (const Wektor  &v)
	{
		return Wektor(this->x + v.x, this->y + v.y);
	}
	Wektor operator- (const Wektor  &v)
	{
		return Wektor(this->x - v.x, this->y - v.y);
	}
};

int main(void)
{
	Wektor ex1, ex2, ex3;
	cin >> ex1;
	cin >> ex2;
	cout << ex1;
	cout << ex2;

	ex3 = ex1 + ex2;
	cout << endl;
	cout << "Wspolrzedne po dodaniu: " << endl;
	cout << ex3;

	ex3 = ex1 - ex2;
	cout << endl;
	cout << "Wspolrzedne po udejmowaniu: " << endl;
	cout << ex3;

	system("Pause");
	return 0;
}


 