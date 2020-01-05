#include <iostream>
#include <string>
using namespace std;

// prog 71 + 74,75
//string niezdefiniowany zawiera wartosc pusta

class GradeBook //konstruktor nazywa sie jak klasa i nic nie zwraca, moze miec argumanty
{
    public:
        explicit GradeBook(string name)
            :courseName(name){}

        void setCourseName(string name)
        {
            courseName = name;
        }
        string getCourseName() const
        {
            return courseName;
        }
        
        void displayMessage() const
        {
            cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
        }

private:
    string courseName; //data member
};

int main()
{
//    string nameOfCourse;
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

/*    cout << "Initial course name is:" << myGradeBook.getCourseName() << endl;

    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;
    myGradeBook.displayMessage();*/
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
}