/*Write a program to add data objects of two different classes using friend functions.*/
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int numA;

public:
    A(int x)
    {
        numA = x;
    }
    friend int add(A, B);
};

class B
{
private:
    int numB;

public:
    B(int y)
    {
        numB = y;
    }
    friend int add(A, B);
};
int add(A objA, B objB)
{
    return (objA.numA + objB.numB);
}
int main()
{
    A obj1(10);
    B obj2(20);
    cout << "Sum = " << add(obj1, obj2) << endl;
    return 0;
}
