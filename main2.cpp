#include <iostream>
using namespace std;
/*Napisz program pozwalaj�cy zapami�ta� w zmiennych cz�onkowskich obiektu uczen nale��cego do Klasy Uczen wybrane dane ucznia :
imi�, nazwisko, rok urodzenia, klas�, grup�.Pobierz dane ucznia z klawiatury, a nast�pnie wy�wietl je kontrolnie na ekranie monitora.
Wykorzystaj obiekt nale��cy do zdefiniowanej samodzielnie klasy, dla kt�rego pami�� operacyjna zosta�a zaalokowana w spos�b dynamiczny na stercie.
Dost�p do element�w cz�onkowskich klasy zrealizuj za po�rednictwem wska�nik�w.*/

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

