/*Write a program to create a class shape with functions area and display to find area
and display the name of the shape and other essential component of the class. Create
derived classes circle, rectangle and triangle each having overridden functions area
and display. Write a program to find and display the area of circle, rectangle and
triangle.*/
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r) { radius = r; }
    void area() override
    {
        cout << "Area of Circle = " << 3.1415 * radius * radius << endl;
    }
    void display() override
    {
        cout << "Shape: Circle" << endl;
    }
};

class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void area() override
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
    void display() override
    {
        cout << "Shape: Rectangle" << endl;
    }
};

class Triangle : public Shape
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }
    void area() override
    {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
    void display() override
    {
        cout << "Shape: Triangle" << endl;
    }
};

int main()
{
    Shape *s;
    float r, l, b, base, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    Circle c(r);

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    Rectangle rect(l, b);

    cout << "Enter base and height of triangle: ";
    cin >> base >> h;
    Triangle t(base, h);

    s = &c;
    s->display();
    s->area();
    s = &rect;
    s->display();
    s->area();
    s = &t;
    s->display();
    s->area();

    return 0;
}
