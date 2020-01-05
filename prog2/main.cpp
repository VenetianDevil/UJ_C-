#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
/*    GradeBook gradeBook1("CS101 Introduction to C++ Programing");
    GradeBook gradeBook2("CS102 Data Structures in C++");
    GradeBook gradeBook1("Kurs1","Jankowski");
*/
    GradeBook gradeBook1("JezykC++", "Adam Kowal");

    gradeBook1.displayMessage();
    //cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
}