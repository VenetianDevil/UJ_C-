#include <string>
class GradeBook
{
    public:
	//explicit GradeBook( std::string);
	
		void setCourseName( std::string);
		std::string getCourseName () const;
		
		void displayMessage() const;

		void setInstructorName(std::string);
		std::string getInstructorName() const;
		
		GradeBook(std::string, std:: string);
		
	private:
		std::string courseName;
		std::string instructorName;
};