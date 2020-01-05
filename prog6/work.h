//exploring c 11 chapter 37 #github
#ifndef WORK_H
#define WORK_H

#include "Date.h"
#include <string>

using namespace std;

class work
{
    public:
	work();
	work(work const&); // referencja do obiektu tej klasy
	work(string const&, string const&);
	string const& id() const;
	string const& title() const;
	void print() const;
    private:
	string id_;
	string title_;
};

class book: public work // dzidziczenie publiczne klasy work
{
    public:
        book();
        book(book const&);
        book(string const&, string const&, string const&, int);
        string const& author() const;
	int pubyear() const;
	void print() const;
    private:
	string author_;
	int pubyear_;
};

class periodical: public work, public Date
{
    public:
	periodical();
	periodical(periodical const&);
	periodical(string const&, string const&, int, int, int, int, int);
	int volume() const;
	int number() const;
	void print() const;
    private:
	int volume_;
	int number_;
};

#endif