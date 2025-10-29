/*Write a C++ program creating an abstract class Student. Create three derived classes
Science, Art and Commerce from the base class. Create the objects of the derived classes and
process them and access them using array of pointer of type Student.*/
#include <iostream>
using namespace std;

class Student
{
public:
    virtual void display() = 0; // pure virtual function
};

class Science : public Student
{
public:
    void display()
    {
        cout << "This is a Science student." << endl;
    }
};

class Art : public Student
{
public:
    void display()
    {
        cout << "This is an Art student." << endl;
    }
};

class Commerce : public Student
{
public:
    void display()
    {
        cout << "This is a Commerce student." << endl;
    }
};

int main()
{
    Science s;
    Art a;
    Commerce c;

    Student *students[3];
    students[0] = &s;
    students[1] = &a;
    students[2] = &c;

    cout << "Displaying student types:\n"
         << endl;

    for (int i = 0; i < 3; i++)
    {
        students[i]->display();
    }

    return 0;
}
