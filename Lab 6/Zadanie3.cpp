#include <iostream>
#include <list>
#include <limits>
#include <string>
#include <cstdio>

using namespace std;

class Stos
{
    list <double> stos;
public:
    void push();
    void pop();
    void wyswietl();
};

void Stos::push()
{
    try
    {
        double liczba;
        cout << "Liczba rzeczywista: ";
        cin >> liczba;
        if(cin.fail() || cin.peek() != 10) throw "Podales bledne dane!";
        stos.push_front(liczba);
    }
    catch(const char *blad)
    {
        cout << blad << endl;
    }
    cin.clear();
    cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
}

void Stos::pop()
{
    try
    {
        if(stos.empty()) throw "Stos jest pusty!";
        list <double>::iterator tmp = stos.begin();
        cout << "Wartosc zdjeta ze stosu: " << *tmp << endl;
        stos.pop_front();
    }
    catch(const char *blad)
    {
        cout << blad << endl;
    }
}

void Stos::wyswietl()
{
    try
    {
        if(stos.empty()) throw "Stos jest pusty!";
        cout << "Stos:" << endl;
        for(list<double>::iterator i=stos.begin(); i != stos.end(); ++i) cout << *i << " ";
        cout << endl;
    }
    catch(const char *blad)
    {
        cout << blad << endl;
    }
}

int main()
{
    Stos stos;
    while(true)
    {
        try
        {
            cout << "Menu stosu liczb rzeczywistych (Koniec Ctrl+C)" << endl;
            cout << "1) Podaj liczbe" << endl;
            cout << "2) Zdejmij liczbe" << endl;
            cout << "3) Pokaz stos" << endl;
            cout << "Numer akcji: ";
            string akcja;
            getline(cin, akcja);
            if(akcja == "1") stos.push();
            else if(akcja == "2") stos.pop();
            else if(akcja == "3") stos.wyswietl();
            else throw "Nie ma takiej opcji!";
        }
        catch(const char *blad)
        {
            cout << blad << endl;
        }
        cout <<"Wcisnij ENTER!" << endl;
        cin.get();
        cin.clear();
        cout << endl;
    }
    return 0;
}
