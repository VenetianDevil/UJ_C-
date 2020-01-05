#include <iostream>
#include "work.h"
using namespace std;

book::book()
    :work{}, author_{}, pubyear_{}
{}

book::book(book const&) = default;

book::book(string const& id, string const& title, string const& author, int pubyear)
    :work(id, title), author_(author), pubyear_(pubyear)
{}

string const& book::author() const
{
    return author_;
}

int book::pubyear() const
{
    return pubyear_;
}

void book::print() const
{
    cout << id() << "	" << title() << "	" << author_ << "	" << pubyear_ << endl;
    /*//wywolujac print z klasy work
    work::print();
    cout << author_ << "	" << pubyear_ << endl;*/
}