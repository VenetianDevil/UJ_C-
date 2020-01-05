#include "Time.h"
#include "Date.h"
#include "date_time.h"
using namespace std;
int main()
{
    Date data(3, 26, 2018);
    Time czas(10, 42, 28);
    DateTime dt(data, czas);

    dt.printDT();

    DateTime DataCzas1(12,20,1997,13,42,0);

    DataCzas1.printDT();

    return 0;
}