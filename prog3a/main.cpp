#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employee1("Marek", "Kowal", -50);
    Employee employee2("Dorota", "Mila", 300);

    employee1.displayMessage();
    printf("\n");
    employee2.displayMessage();

    printf("\n");

    employee1.risedisplayMessage();
    printf("\n");
    employee2.risedisplayMessage();
}