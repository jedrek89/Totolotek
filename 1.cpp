/*  TOTOLOTEK
    Polecenia dla power shell
    g++ 1.cpp
    .\a.exe
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int trafienia = 0;
int skreslenie;
int j = 0;
int i = 0;
int tab_skr[6];
int tab_los[6];
void sprawdzenie_wpr_danych();
void sprawdzenie_wyl_danych();
int porownanie_liczb();
int losowanie();

int main() {
    
    cout << " _______ ____ _______ ____  _      ____ _______ ______ _  __" << endl;
    cout << "|__   __/ __ |__   __/ __ || |    / __ |__   __|  ____| |/ /" << endl;
    cout << "   | | | |  | | | | | |  | | |   | |  | | | |  |  __| |  <  " << endl;
    cout << "   | | | |__| | | | | |__| | |___| |__| | | |  | |____| . | " << endl;
    cout << "   |_|  |____/  |_|  |____/|______|____/  |_|  |______|_||_| " << endl;
    cout <<"\n" ;

// Skreslanie liczb
    for (i > 0; i < 6; i++)
    {
        cout << "Podaj " << i+1 << " liczbe do zakreslenia: " << endl;
        cin >> skreslenie;
    // Kontrola wprowadzonej liczby 
        if (skreslenie > 0 && skreslenie <= 49)
        {
            tab_skr[i]=skreslenie;
        }
        else
        {
            cout << "Liczba wykracza poza zakres ! " << endl;
            i--;
        }

    }
    // Sprawdzenie danych
    sprawdzenie_wpr_danych();
    cout << "\nLiczby wylosowane to: " << endl;
    // Losowanie liczb
    srand( time( NULL ) );
    i = 0;
    for (i > 0; i < 6; i++)
    {
        tab_los[i] = losowanie();
    }
   
    porownanie_liczb();
    cout << "\nTrafiles: " << trafienia << " liczb" << endl;
    return 0;
}
// Funkcja sprawdzajaca wprowadzone dane
void sprawdzenie_wpr_danych()
{
    i = 0;
    cout << "Zakresliles liczy: \n" ;
    for (i > 0; i < 6; i++)
    {
        cout << tab_skr[i] << " " ;
    }
}
// Funkcja sprawdzajaca wylosowane dane
void sprawdzenie_wyl_danych()
{
    i = 0;
    cout << "\nWylosowane liczby: " << endl ;
    for (i > 0; i < 6; i++)
    {
        cout << tab_los[i] << " " ;
    }
}
// Funkcja losujaca
int losowanie()
{
    int liczba;
    liczba = (rand() % 49) + 1;
    cout << liczba << " " ;
    return liczba;
}

// Funkcja porownujaca wlosowane liczby ze skreslonymi
int porownanie_liczb()
{
    i = 0;
    j = 0;
    trafienia = 0;
    for (i > 0; i < 6; i++)
    { 
        for (j > 0; j < 6; j++)
        { 
            if (tab_skr[i]==tab_los[j])
            {
                trafienia++;
            }
        }
        j = 0;
    }
    return trafienia;    
}
