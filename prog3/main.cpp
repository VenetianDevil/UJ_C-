#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employee1("Marek", "Kowal", -50);
    Employee employee2("Dorota", "Mila", 300);

    employee1.displayMessage();
    cout << "Yearly salary: " << employee1.getSalary()*12 << endl;
    cout<< ("\n");
    employee2.displayMessage();
    cout << "Yearly salary: " << employee2.getSalary()*12 << endl;

    cout << ("\n\n");

    employee1.setSalary(employee1.getSalary()*1.1);
    employee2.setSalary(employee2.getSalary()*1.1);

    cout <<"1. Yearly salary after 10% rise: " << employee1.getSalary()*12 << endl;
    cout << ("\n");
    cout << "2. Yearly salary after 10% rise: "<< employee2.getSalary()*12<< endl;
}