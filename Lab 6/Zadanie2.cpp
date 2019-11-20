#include <limits>
#include <iostream>
#include <cmath>
using namespace std;

class Liczba: public exception {
    virtual const char* what() const throw() {
        return "Wpisano zla wartosc.";
    }
};

class Licznik: public exception {
    virtual const char* what() const throw() {
        return "Licznik powinien byc >= 0.";
    }
};

class Mianownik: public exception {
    virtual const char* what() const throw() {
        return "Mianownik powinien =/= 0.";
    }
};

    class Funkcja{
    float a, b, wynik;
    public:
    friend class Liczba;
    friend class Licznik;
    friend class Mianownik;
    float wczytaj()
    {
        for(;;){
            try{
                float liczba;
                Liczba blad;
                cin >> liczba;
                if(!cin.good() || cin.peek() != 10) throw blad;
                return liczba;
            }
            catch(exception &blad){
                cout << blad.what() << endl;
            }
            cin.clear();
            cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
        }
    }
    void ustaw()
    {
        cout << "Podaj kolejno zmienne A i B." << endl;
        cout << "A:";
        a = wczytaj();
        cout << "B:";
        b = wczytaj();
    }
    void rozwiazanie()
    {
        cout << "Wynik = " << wynik << "." << endl;
    }
    void oblicz()
    {
        try{
            Licznik wyjatek;
            Mianownik wyjatek2;
            if(a < 0) throw wyjatek;
            if(b == 0) throw wyjatek2;
            wynik = sqrt(a) / b;
            rozwiazanie();
        }
        catch(exception &blad){
            cout << blad.what() << endl;
        }
    }
};

int main(){
    cout << "Program oblicza wartosc wyrazenia sqrt(a) / b." << endl;
    Funkcja ulamek;
    ulamek.ustaw();
    ulamek.oblicz();
    return 0;
}
