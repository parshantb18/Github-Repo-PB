/*Write a program to implement (a) pointer to an object (b) this pointer. Practice both ‘.’
(dot operator) and ‘->’ (arrow operator).*/
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        this->length = l;
        this->breadth = b;
    }
    void setValues(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }
    int area()
    {
        return this->length * this->breadth;
    }
    void display()
    {
        cout << "Length = " << length << ", Breadth = " << breadth << endl;
    }
};

int main()
{
    Rectangle r1(4, 5);
    Rectangle *ptr;
    ptr = &r1;

    cout << "Using dot operator on object:" << endl;
    r1.display();
    cout << "Area = " << r1.area() << endl;

    cout << "\nUsing arrow operator on pointer:" << endl;
    ptr->display();
    cout << "Area = " << ptr->area() << endl;
    Rectangle *ptr2 = new Rectangle(6, 7);
    cout << "\nDynamically created object (using new):" << endl;
    ptr2->display();
    cout << "Area = " << ptr2->area() << endl;
    delete ptr2;
    return 0;
}
