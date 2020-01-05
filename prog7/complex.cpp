//str 61
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class complex 
{
    double re, im; // representation: two doubles

    public:
        complex(double r, double i) :re{r}, im{i} {} //construct complex form two scalars
        complex(double r) :re{r}, im{0} {} //construct complex from one scalar
        complex() :re{0}, im{0} {} // default complex: {0,0}

        double real() const { return re; }
        void real(double d) { re=d; }
        double imag() const { return im; }
        void imag(double d) { im=d; }

	complex& operator+=(complex z) { re+=z.re; im+=z.im; return *this;}
	// add to re and im
	// and return the result // *this - wskaznik do biezacej klasy, zwracanie obiektu, referencji do klasy complex
    
	complex& operator-=(complex z) { re-=z.re; im-=z.im; return *this;}

    complex& operator*=(complex z)
	{
	    double x = re*z.re-im*z.im;
	    double y = im*z.re+re*z.im;
	    re = x;
	    im = y;
	    return *this;
	}

    complex& operator/=(complex z)
	{
	    double x = (re*z.re+im*z.im)/(z.re*z.re+z.im*z.im);
	    double y = (im*z.re - re*z.im)/(z.re*z.re+z.im*z.im);
	    re = x;
	    im = y;
	    return *this;
	}
// defined out-of-class somewhere
// defined out-of-class somewhere
};
    complex operator+(complex a, complex b) { return a+=b; }
    complex operator-(complex a, complex b) { return a-=b; }
    complex operator-(complex a) { return {-a.real(), -a.imag()}; }
    complex operator*(complex a, complex b) { return a*=b; }
    complex operator/(complex a, complex b) { return a/=b; }

    //ostream& - bo zwracamy referencje ->&
    ostream& operator<<(ostream& os, complex const& z) //os - strumien
    {
	os << "(" << z.real() << "," << z.imag() << ")";
	return os;
    }

    istream& operator>>(istream& is, complex& z)
    {
	char n;
	double r, i;
	is >> n  >> r  >> n >> i >> n;//zakladajac ze uzytkownik wpisuje odpowiednie znaki za n (,)
	z.real(r);
	z.imag(i);
	return is;
    }

    complex sqrt(complex const& z)
    {
	double a = z.real();
	double b = z.imag();
	double x, y;
	//watpliwosc przy + i - czy sa odpowiednie
	x = sqrt((a+sqrt(a*a+b*b))/2);
	y = sqrt((sqrt(a*a+b*b)-a)/2);
	complex c{x, y}; //powstawly pierwiastek
	return c;
    }

//rownanie kwadratowe
class row_kw: public complex
{
    private:
	complex a, b, c;
	complex z1, z2;

    public:
	row_kw(complex a1=1, complex b1=0, complex c1=0)
//jesli nie podamy innych wartosci do konstruktor automatycznie ustawi sie na takie wartosci
	    :a(a1), b(b1), c(c1) {}
	void solve()
	{
	    complex delta = b*b - 4*a*c;
	    complex pierw = sqrt(delta);
	    z1 = (-b - pierw)/(2*a);
	    z2 = (-b + pierw)/(2*a);
	}
	void printf() const
	{
	    cout << z1 << endl;
	    cout << z2 << endl;
	}
};

int main()
{
    complex a (3, 4);
    complex b (5, 1.3);

    complex c{};
    cout << "Podaj liczbe zespolona: ";
    cin >> c;
    
    cout << a+b << endl;
	//cout << a << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;

    cout << c << endl;

    /*complex d{}, e{}, f{};
    cin >> d >> e >> f;

    row_kw r (d, e, f);
    r.solve();
    cout << endl;
    r.printf();*/
}