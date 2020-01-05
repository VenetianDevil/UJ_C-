#include <iostream>
#include "work.h"

work::work()= default;

work::work(work const&) = default;

work::work(string const& id, string const& title)
    :id_(id), title_(title)
{}

string const& work::id() const
{
    return id_;
}

string const& work::title() const
{
    return title_;
}

void work::print() const
{
    cout << id_ <<"	"<< title_ << endl;
}