#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;

class Czas
{
public:
	int godzina;
	int minuta;
	int sekunda;
	void wypisz()
	{
		cout << "Godzina: " << godzina << endl;
		cout << "Minuta: " << minuta << endl;
		cout << "Sekunda: " << sekunda << endl;
	}

	void operator= (tm ptm)
	{
		godzina = ptm.tm_hour + 1;
		minuta = ptm.tm_min;
		sekunda = ptm.tm_sec;
	}
};

int main(void)
{
	time_t rawtime;
	struct tm * ptm;
	time(&rawtime);
	ptm = gmtime(&rawtime);
	Czas czas_1;
	czas_1 = *ptm;
	czas_1.wypisz();
	system("Pause");
	return 0;
}
