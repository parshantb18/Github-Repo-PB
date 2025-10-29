/*Write a C++ program to implement the diamond problem (hybrid inheritance). State the
necessary assumptions using comments. – (HINT: use virtual base class)*/
#include <iostream>
using namespace std;

/*
Assumptions:
- Class A is the base class.
- Classes B and C inherit from A.
- Class D inherits from both B and C.
- To avoid duplicate copies of A in D, we use 'virtual' inheritance.
*/

class A
{
public:
    A()
    {
        cout << "Constructor of A called" << endl;
    }
    void showA()
    {
        cout << "This is class A" << endl;
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "Constructor of B called" << endl;
    }
    void showB()
    {
        cout << "This is class B" << endl;
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "Constructor of C called" << endl;
    }
    void showC()
    {
        cout << "This is class C" << endl;
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of D called" << endl;
    }
    void showD()
    {
        cout << "This is class D" << endl;
    }
};

int main()
{
    D obj; // Object of most derived class

    cout << "\nCalling functions from D object:\n";
    obj.showA(); // Only one copy of A exists (due to virtual inheritance)
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}
