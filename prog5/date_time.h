#include "Time.h"
#include "Date.h"
using namespace std;

class DateTime
{
    public:
	DateTime(const Date &, const Time &); // odwolanie, zeby nie kopiowac calych danych
	DateTime(int, int, int, int, int, int); //(M D Y H Min S)
	void printDT() const;
    private:
	Date data;
	Time czas;
};