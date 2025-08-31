/*Write a program to demonstrate the working of friend class.*/
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int num;

public:
    A()
    {
        num = 10;
    }
    friend class B;
};
class B
{
public:
    void display(A obj)
    {
        cout << "The value of num from class A is: " << obj.num << endl;
    }
};
int main()
{
    A objA;
    B objB;
    objB.display(objA);
    return 0;
}
