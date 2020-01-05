#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "macierze.h"

using namespace std;

// MACIERZE -------------------------------------------------

macierz::macierz() = default;

macierz::macierz(int a, int b)
    :n(a), m(b)
{}

void macierz::setwiersze()
{
    int w;
    cin >> w;
    n=w;
}

void macierz::setkolumny()
{
    int k;
    cin >> k;
    m=k;
}

void macierz::setmacierz()
{
    tab = new int*[n];
    for(int i=0; i<n; i++)
    {
        tab[i] = new int[m];
        for(int j=0; j<m; j++)
        {
            int a;
            cin >> a;
            tab[i][j] = a;
        }
    }
    while((getchar())!='\n');
}

void macierz::printf() const
{   
    for(int i=0; i<n; i++)
    {
        cout << endl;
        for(int j=0; j<m; j++)
        {
            cout << tab[i][j] << " ";
        }
    }
}

void macierz::usuntab() const
{
    for(int i=0; i<m; i++)
    {
        delete [] tab[i];
    }
    delete [] tab;
}

int macierz::wiersze()
{
    return n;
}

int macierz::kolumny()
{
    return m;
}

// OPERATORY ------------------------------------------------

macierz& macierz::operator+=(macierz k)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j]+=k.tab[i][j];
        }
    }
    return *this;
}

macierz& macierz::operator-=(macierz k)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j]-=k.tab[i][j];
        }
    }
    return *this;
}

macierz& macierz::operator*=(macierz const k)
{
    int temp[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            temp[i][j]=tab[i][j];
        }
    }
    for (int l=0; l<m; l++)
    {
        for (int i=0; i<n; i++)
        {   
            int a = 0;
            for(int j=0; j<m; j++)
            {
                a+=temp[i][j]*k.tab[j][l];
            }
            tab[i][l] = a;
        }
    }
    return *this;
}

macierz operator+(macierz a, macierz b) { return a+=b; }
macierz operator-(macierz a, macierz b) { return a-=b; }
macierz operator*(macierz a, macierz b) { return a*=b; }

ostream& operator<<(ostream& os, macierz const m)
{
    m.printf();
    return os;
}

istream& operator>>(istream& is, macierz &m)
{
    m.setmacierz();
    return is;
}

// OPERACJE NA MACIERZACH --------------------------------------

operacje::operacje()=default;

operacje::operacje(macierz a, macierz b)
    :m1(a), m2(b)
{}

void operacje::dodawanie ()
{
    int w1 = m1.wiersze();
    int w2 = m2.wiersze();
    int k1 = m1.kolumny();
    int k2 = m2.kolumny();
    if(w1!=w2 || k1!=k2)
    {
        cout << "Nie mozna dodac tych macierzy!" << endl;
    }
    else
    {
        cout << m1 + m2 << endl << endl;
    }
}

void operacje::odejmowanie ()
{
    int w1 = m1.wiersze();
    int w2 = m2.wiersze();
    int k1 = m1.kolumny();
    int k2 = m2.kolumny();
    if(w1!=w2 || k1!=k2)
    {
        cout << "Nie mozna odjac tych macierzy!" << endl;
    }
    else
    {
        cout << m1 - m2 << endl << endl;
    }
}

void operacje::mnozenie ()
{
    int k1 = m1.kolumny();
    int w2 = m2.wiersze();

    if(k1!=w2)
    {
        cout << "Nie mozna wymnozyc tych macierzy" << endl;
    }
    else
    {
        cout << m1 * m2 << endl << endl;
    }
}