#include <iostream>
#include "Date.h" // include definition of class Date from Date.h
#include <stdexcept> // do invalid_argument
#include <array>
using namespace std;
// Date constructor (should do range checking)
Date::Date( int m, int d, int y )
    : month( m ), day( d ), year( y )
{
    setdate(m, d, y);
} // end constructor Date

// print Date in the format mm/dd/yyyy
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
} // end function print

unsigned int Date::getmonth() const
{
    return month;
}

unsigned int Date::getday() const
{
    return day;
}

unsigned int Date::getyear() const
{
    return year;
}

void Date::setdate(int m, int d, int y)
{
    if(m>0 && m<13)
	month=m;
    else
	throw invalid_argument("month must be 1-12");

    if(y>0)
	year=y;
    else
	throw invalid_argument("year must be positive");

    /*if(m==1 || m==3 ||m==5 || m==7 || m==8 || m==10 || m==12)
    {
	if (d>0 && d<31)
	    day=d;
    }*/

//array - tablica z biblioteki
    static const array< int, 12 > daysPerMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// determine whether testDay is valid for specified month
    if ( d > 0 && d <= daysPerMonth[m-1] )
    {
	day=d;
	return;
    }
// February 29 check for leap year
    if ( month == 2 && d == 29 && ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) ) )
    {
	day=d;
	return;
    }

    throw invalid_argument( "Invalid day for current month and year" );
}