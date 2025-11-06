/*Write a program with Student as abstract class and create derive classes Engineering,
Medicine and Science from base class Student. Create the objects of the derived
classes and process them and access them using array of pointer of type base class
Student.*/
#include <iostream>
using namespace std;

class Student
{
public:
    virtual void course() = 0; // pure virtual function
};

class Engineering : public Student
{
public:
    void course() override
    {
        cout << "Engineering Student: Focus on technical and practical subjects." << endl;
    }
};

class Medicine : public Student
{
public:
    void course() override
    {
        cout << "Medicine Student: Focus on medical science and healthcare." << endl;
    }
};

class Science : public Student
{
public:
    void course() override
    {
        cout << "Science Student: Focus on experiments and theoretical knowledge." << endl;
    }
};

int main()
{
    Student *s[3];
    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    cout << "Student Course Details:\n";
    for (int i = 0; i < 3; i++)
    {
        s[i]->course();
    }

    return 0;
}
