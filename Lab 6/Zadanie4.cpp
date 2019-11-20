#include <iostream>
#include <set>
#include <limits>
using namespace std;

class Dziennik
{
    set <string> lista;
public:
    void dodajUcznia();
    void usunUcznia();
    void pokazListe();
};

void Dziennik::dodajUcznia()
{
    try
    {
        string dane;
        cout << "Imie i nazwisko ucznia: " << endl;
        getline(cin, dane);
        if(dane == "") throw "Dane nie moga byc puste!";
        lista.insert(dane);
    }
    catch(const char *blad)
    {
        cout << blad << endl;
    }
}

void Dziennik::usunUcznia()
{
    try
    {
        if(lista.empty()) throw "Nie ma kogo usuwac!";
        string dane;
        cout << "Wpisz imie i nazwisko szukanej osoby!" << endl;
        getline(cin, dane);
        set <string>::iterator osoba = lista.begin();
        bool czy_jest = false;
        for(; osoba != lista.end(); osoba++) if(*osoba == dane)
            {
                czy_jest = true;
                break;
            }
        if(!czy_jest) throw "Nie ma takiej osoby!";
        cout << "Usunieto ucznia: " << *osoba << endl;
        lista.erase(osoba);
    }
    catch(const char *blad)
    {
        cout << blad << endl;
    }
}

void Dziennik::pokazListe()
{
    try
    {
        if(lista.empty()) throw "Lista jest pusta!";
        cout << "Lista: " << endl;
        for(set<string>::iterator i=lista.begin(); i != lista.end(); ++i) cout << *i <<endl;
    }
    catch(const char *blad)
    {
        cout << blad << endl;
    }
}

int main(void)
{
    Dziennik lista;
    while(1)
    {
        try
        {
            cout << "Lista uczniow (Ctrl+C - koniec):" << endl;
            cout <<"1) Dodaj ucznia." << endl;
            cout <<"2) Usun ucznia." << endl;
            cout <<"3) Pokaz liste." << endl;
            cout << "Podaj numer akcji: " << endl;
            string akcja;
            getline(cin, akcja);
            if(akcja == "1") lista.dodajUcznia();
            else if(akcja == "2") lista.usunUcznia();
            else if(akcja == "3") lista.pokazListe();
            else throw "Brak takiej opcji!";
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
