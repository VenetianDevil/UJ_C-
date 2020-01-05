#include <iostream>
#include "work.h"

int main()
{
    work job1("ISB1", "Programowanie");
    job1.print();

    work job2{};
    job2.print();

    book ch1("ISB1", "Programowanie", "J. Kowalski", 2016);
    ch1.print();

    periodical a1("ISB1", "Programowanie", 1, 1232, 02, 16, 2008);
    a1.print();
}