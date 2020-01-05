#include <string>
using namespace std;

class Employee
{
	public:
		void setFirstName(string);
		string getFirstName () const;

		void setLastName(string);
		string getLastName() const;

		void setSalary(double);
		double getSalary() const;

		void displayMessage() const;
		void risedisplayMessage() const;
		
		Employee(string,string,double);

	private:
		string FirstName;
		string LastName;
		double Salary;
};