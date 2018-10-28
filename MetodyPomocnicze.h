#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{

public:

    static string konwerjsaIntNaString(int liczba);
    static char wybierzOpcjeZMenuGlownego();
    static char wybierzOpcjeZMenuUzytkownika();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

};

#endif // METODYPOMOCNICZE_H
