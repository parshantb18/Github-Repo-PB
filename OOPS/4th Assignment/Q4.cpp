/*Class Student contains data members RollNo and Name as protected and member
functions GetDetails() to get RollNo and Name and DisplayDetails() to display
RollNo and Name.
 Class Marks is publicly inherited from Student. Student class contains protected data
member Subject1 and Subject2 i.e. marks obtained in two subjects and GetMarks()
and DisplayMarks() are two public member functions.
 Class Result is publicly inherited from Marks. It contains private data member
TotalMarks and two public methods CalculateResult() and DisplayResult() with status
whether the student has “PASSED” or “FAILED”.
Write a C ++ program to show the results according to the following formats:
 Enter the number of students:  2
 Enter student roll number: 1
 Enter name of the student: A
 Enter the marks of subject 1: 27
 Enter the marks of subject 2: 32
 Enter student roll number: 2
 Enter name of the student: B
 Enter the marks of subject 1: 65
 Enter the marks of subject 2: 45*/
#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void GetDetails()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
    void DisplayDetails()
    {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

class Marks : public Student
{
protected:
    int subject1, subject2;

public:
    void GetMarks()
    {
        cout << "Enter marks in Subject 1: ";
        cin >> subject1;
        cout << "Enter marks in Subject 2: ";
        cin >> subject2;
    }
    void DisplayMarks()
    {
        cout << "Subject 1: " << subject1 << ", Subject 2: " << subject2 << endl;
    }
};

class Result : public Marks
{
    int totalMarks;

public:
    void CalculateResult()
    {
        totalMarks = subject1 + subject2;
    }
    void DisplayResult()
    {
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Result r;
    r.GetDetails();
    r.GetMarks();

    cout << "\n--- Student Result ---\n";
    r.DisplayDetails();
    r.DisplayMarks();
    r.CalculateResult();
    r.DisplayResult();

    return 0;
}