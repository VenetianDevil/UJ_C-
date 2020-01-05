#include <iostream>
#include <string>

using namespace std;

class person
{
    private:
	string name;
	int age;
    public:
	person (string n, int a): name{n}, age{a} {}
	friend ostream& operator<<(ostream& wyjscie, person const& p)
	{
	    wyjscie << "Imie " << p.name << " wiek: " << p.age;
	    return wyjscie;
	}
	friend istream& operator>>(istream& wejscie, person& p)
	{
	    wejscie >> p.name >> p.age;
	    return wejscie;
	}
}

int main()
{
    person p1{};
    while (cin >> p1)
    {
        cout << p1;
    }
}