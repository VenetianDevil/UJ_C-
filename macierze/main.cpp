#include <iostream>
#include "macierze.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
    macierz m1{};
    macierz m2{};
    cout << "Podaj wymiary macierzy 1:\nwiersze: ";
    m1.setwiersze();
    cout << "kolumny: ";
    m1.setkolumny();

    cout << "Podaj wymiary macierzy 2:\nwiersze: ";
    m2.setwiersze();
    cout << "kolumny: ";
    m2.setkolumny();

    cout << endl;

    cout << "Podaj elementy 1 macierzy: " << endl;
    m1.setmacierz();
    cout << "Podaj elementy 2 macierzy " << endl;
    m2.setmacierz();
    
    cout << endl;
    cout << "MACIERZ 1: " << m1 << endl << endl;
    cout << "MACIERZ 2: " << m2 << endl << endl;

    operacje op (m1, m2);

    int a;
    cout << "Jaka operacje chcesz wykonac: \n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n";
    cin >> a;
    cout << endl;

    switch(a)
    {
        case 1:
            cout << "SUMA: ";
            op.dodawanie();
        break;
        
        case 2:
            cout << "ROZNICA: ";
            op.odejmowanie();
        break;
        
        case 3:
            cout << "ILOCZYN: ";
            op.mnozenie();
        break;
        default:
            cout << "Nie ma operacji o takim numerze\n";
        break;
    }
    
    m1.usuntab();
    m2.usuntab();
}