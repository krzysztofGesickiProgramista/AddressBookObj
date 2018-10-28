#include "AdresatMenedzer.h"

using namespace std;

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    string tymczasowaDana;
    cout << "Podaj imie: ";
    cin >> tymczasowaDana;
    tymczasowaDana = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(tymczasowaDana);
    adresat.ustawImie(tymczasowaDana);

    cout << "Podaj nazwisko: ";
    cin >> tymczasowaDana;
    tymczasowaDana = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(tymczasowaDana);
    adresat.ustawNazwisko(tymczasowaDana);

    cout << "Podaj numer telefonu: ";
    cin.sync();
    getline(cin, tymczasowaDana);
    adresat.ustawNumerTelefonu(tymczasowaDana);

    cout << "Podaj email: ";
    cin >> tymczasowaDana;
    adresat.ustawEmail(tymczasowaDana);

    cout << "Podaj adres: ";
    cin.sync();
    getline(cin, tymczasowaDana);
    adresat.ustawAdres(tymczasowaDana);

    return adresat;
}

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}
