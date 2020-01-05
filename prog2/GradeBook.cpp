#include <iostream>
#include "GradeBook.h"
using namespace std;

/*GradeBook::GradeBook (string name)
    :courseName(name)
{}
*/
void GradeBook::setCourseName( string name)
{
    courseName = name;
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for: " << getCourseName() << "!" << endl;
    cout << "This course is presented by: " << getInstructorName() << endl;
}

void GradeBook::setInstructorName(string name)
{
    instructorName = name;
}

string GradeBook::getInstructorName() const
{
    return instructorName;
}

GradeBook::GradeBook(string n1, string n2)
{
    courseName = n1;
    instructorName = n2;
}