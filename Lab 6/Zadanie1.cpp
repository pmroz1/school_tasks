#include <cmath>
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

class Funkcja
{
    int a, b, c;
    double x, x2;
public:
    int wczytaj(void)
    {
        int liczba;
        while(1)
        {
            try
            {
                cin >> liczba;
                if(!cin.good() || cin.peek() != 10) throw "Wpisana wartosc jest bledna";
                return liczba;
            }
            catch(const char *blad)
            {
                cout << blad << endl;
            }
            cin.clear();
            cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
        }
    }
    void ustaw(void)
    {
        cout << "Podaj wspolczynniki a, b i c rownania kwadratowego:" << endl;
        cout <<"A:";
        a = wczytaj();
        cout <<"B:";
        b = wczytaj();
        cout <<"C:";
        c = wczytaj();
    }
    void rozwiazanie(double x)
    {
        cout << "Miejsce zerowe: " << x << endl;
    }
    void oblicz(void)
    {
        try
        {
            if(a == 0) throw "Rownanie nie jest kwadratowe!";
            double delta = (b*b)-(4*a*c);
            if(delta < 0) throw "Brak miejsc zerowych!";
            if(delta == 0)
            {
                x = -b/(2*a);
                rozwiazanie(x);
            }
            if(delta > 0)
            {
                x = (-b-sqrt(delta)) / (2*a);
                x2 = (-b+sqrt(delta)) / (2*a);
                cout <<"X1:";
                rozwiazanie(x);
                cout <<"X2:";
                rozwiazanie(x2);
            }
        }
        catch(const char *blad)
        {
            cout << blad << endl;
        }
    }
};

int main(void)
{
    Funkcja kwadratowa;
    kwadratowa.ustaw();
    kwadratowa.oblicz();
    return 0;
}
