#include <iostream>
using namespace std;
/*Napisz program pozwalaj¹cy zapamiêtaæ w zmiennych cz³onkowskich obiektu uczen nale¿¹cego do Klasy Uczen wybrane dane ucznia :
imiê, nazwisko, rok urodzenia, klasê, grupê.Pobierz dane ucznia z klawiatury, a nastêpnie wyœwietl je kontrolnie na ekranie monitora.
Wykorzystaj obiekt nale¿¹cy do zdefiniowanej samodzielnie klasy, dla którego pamiêæ operacyjna zosta³a zaalokowana w sposób dynamiczny na stercie.
Dostêp do elementów cz³onkowskich klasy zrealizuj za poœrednictwem wskaŸników.*/

class Uczen {
public:
    string imie, nazwisko, klasa, grupa;
    int rok_urodzenia;
    
    void pobierzDane() {
        cout << "Podaj imie: ";                  cin >> imie;
        cout << "Podaj nazwisko: ";              cin >> nazwisko;
        cout << "Podaj klase: ";                 cin >> klasa;
        cout << "Podaj grupe: ";                 cin >> grupa;
        cout << "Podaj rok urodzenia: ";         cin >> rok_urodzenia;
    }
    void metryczka() {
        cout << "\n====================================\n";
        cout << "Autor:\tPatryk Debiak\n";
        cout << "klasa:\t\t3Cg1\n";
        cout << "====================================\n";
    }
     void wyswietlDane() {
        cout <<imie<<endl;
        cout <<nazwisko<<endl;
        cout <<klasa<<endl;
        cout << grupa<<endl;
        cout <<rok_urodzenia<<endl;
    }
};


int main()
{
	Uczen ucz;
	
	ucz.pobierzDane();
    Uczen *x;
    x = new Uczen;
	cout<<x->imie;

	cout<<"Imie: "<<ucz.imie<<endl;
	cout<<"Nazwisko: "<<ucz.nazwisko<<endl;
	cout<<"klasa: "<<ucz.klasa<<endl;
	cout<<"Grupa: "<<ucz.grupa<<endl;
	cout<<"Rok urodzenia: : "<<ucz.rok_urodzenia<<endl;

						
    ucz.metryczka();
    return 0;
}

