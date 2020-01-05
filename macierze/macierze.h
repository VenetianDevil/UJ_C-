#ifndef MAC_H
#define MAC_H

using namespace std;

class macierz
{
    private:
        int n; //wiersza
        int m; //kolumny
        int ** tab; //= new int*[m];
        
    public:
        macierz(); //pusta macierz
        macierz(int, int); //macierz nxm

        void setmacierz();
        void usuntab() const;
        void printf() const;
        void setwiersze();
        void setkolumny();
        int wiersze();
        int kolumny();

        macierz& operator+=(macierz);
        macierz& operator-=(macierz);
        macierz& operator*=(macierz);
};

macierz operator+(macierz, macierz);
macierz operator-(macierz, macierz);
macierz operator*(macierz, macierz);

ostream& operator<<(ostream&, macierz);
istream& operator>>(istream&, macierz);

class operacje: public macierz
{
    private:
        macierz m1;
        macierz m2;

    public:
        operacje();
        operacje(macierz, macierz);
        void dodawanie();
        void odejmowanie();
        void mnozenie();
};

#endif 