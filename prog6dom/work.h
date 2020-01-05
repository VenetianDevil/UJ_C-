//exploring c 11 chapter 37 #github
#ifndef WORK_H
#defiene WORK_H

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
    private:
	string id_;
	string title_;
};

#endif