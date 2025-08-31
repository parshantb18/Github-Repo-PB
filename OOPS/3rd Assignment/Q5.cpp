/*Write a program to swap private values of two classes using a friend function.*/
#include <iostream>
using namespace std;

class B;
class A
{
private:
    int valueA;

public:
    A(int x)
    {
        valueA = x;
    }

    void display()
    {
        cout << "Value in class A: " << valueA << endl;
    }
    friend void swapValues(A &objA, B &objB);
};
class B
{
private:
    int valueB;

public:
    B(int y)
    {
        valueB = y;
    }

    void display()
    {
        cout << "Value in class B: " << valueB << endl;
    }
    friend void swapValues(A &objA, B &objB);
};
void swapValues(A &objA, B &objB)
{
    int temp = objA.valueA;
    objA.valueA = objB.valueB;
    objB.valueB = temp;
}
int main()
{
    A obj1(10);
    B obj2(20);
    cout << "Before swapping:" << endl;
    obj1.display();
    obj2.display();
    swapValues(obj1, obj2);
    cout << "\nAfter swapping:" << endl;
    obj1.display();
    obj2.display();
    return 0;
}
