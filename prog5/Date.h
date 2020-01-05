#ifndef DATE_H
#define DATE_H
// class Date definition
class Date
{
    public:
        explicit Date( int = 1, int = 1, int = 2000 ); // default constructor
	void print() const;
	unsigned int getmonth() const;
	unsigned int getday() const;
	unsigned int getyear() const;
	void setdate(int, int, int);
    private:
	unsigned int month;
	unsigned int day;
	unsigned int year;
}; // end class Date

#endif