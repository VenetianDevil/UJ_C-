#include "date_time.h"
#include <iostream>
using namespace std;

DateTime::DateTime(const Date& d, const Time& t)
    :data(d), czas(t)
{}

DateTime::DateTime(int miesiac, int dzien, int rok, int godz, int min, int sec)
    :data(miesiac, dzien, rok), czas(godz, min, sec)
{}

void DateTime::printDT() const
{
    data.print();
    cout << endl;
    czas.printUniversal();
    cout << endl;
}