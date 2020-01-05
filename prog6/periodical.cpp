#include <iostream>
#include "work.h"

periodical::periodical()
    :work{}, volume_{0}, number_{0}, Date{}
{}

periodical::periodical(periodical const&) = default;

periodical::periodical(string const& id, string const& title, int volume, int number, int m, int d, int y)
    :work(id, title), volume_(volume), number_(number), Date(m, d, y)
{}

int periodical::volume() const
{
    return volume_;
}

int periodical::number() const
{
    return number_;
}

void periodical::print() const
{
    work::print();
    cout<< volume_ << "	"<< number_ << endl;
    Date::print();
    cout << endl;
}