//s400-401
#include <iostream>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;
int main()
{
/*
    Date date1( 7, 4, 2004 );
    Date date2; // date2 defaults to 1/1/2000
    cout << "date1 = ";
    date1.print();
    cout << "\ndate2 = ";
    date2.print();
    date2 = date1; // default memberwise assignment
    cout << "\n\nAfter default memberwise assignment, date2 = ";
    date2.print();
    cout << endl;*/

    Date date;
    try
    {
	date.setdate(2, 29, 1998);
    }
    catch(invalid_argument &e)
    {
	cerr << "\n\nBlad: " << e.what() << endl;
    }

} // end main