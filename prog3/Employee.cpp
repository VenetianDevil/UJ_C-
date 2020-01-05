#include <iostream>
#include "Employee.h"
using namespace std;

void Employee::setFirstName(string name)
{
    FirstName = name;
}

string Employee::getFirstName() const
{
    return FirstName;
}

void Employee::setLastName(string surname)
{
    LastName=surname;
}

string Employee::getLastName() const
{
    return LastName;
}

void Employee::setSalary(double money)
{
    if(money<0)
    Salary = 0;
    else
    Salary = money;
}

double Employee::getSalary() const
{
    return Salary;
}

void Employee::displayMessage() const
{
    cout << "First name: " << getFirstName() << endl;
    cout << "Last name: " << getLastName() << endl;
    cout << "Salary: " << getSalary() << endl;
}

/*void Employee::risedisplayMessage() const
{
    cout << "First name: " << getFirstName() << endl;
    cout << "Last name: " << getLastName() << endl;
    cout << "Salary: " << getSalary()*12*1.1 << endl;
}*/

Employee::Employee(string n1, string n2, double money)
    :FirstName(n1), LastName(n2), Salary(money)
{
    setSalary(money);
}