/*Class polygon contains data member width and height and public method set_value()
to assign values to width and height. Class Rectangle and Triangle are inherited from
polygon class. Both the classes contain public method calculate_area() to calculate the
area of Rectangle and Triangle. Use base class pointer to access the derived class
object and show the area calculated.*/
#include <iostream>
using namespace std;

class Polygon
{
protected:
    float width, height;

public:
    void set_value(float w, float h)
    {
        width = w;
        height = h;
    }
    virtual void calculate_area() = 0; // pure virtual function
};

class Rectangle : public Polygon
{
public:
    void calculate_area() override
    {
        cout << "Area of Rectangle = " << width * height << endl;
    }
};

class Triangle : public Polygon
{
public:
    void calculate_area() override
    {
        cout << "Area of Triangle = " << 0.5 * width * height << endl;
    }
};

int main()
{
    Polygon *p; // base class pointer
    Rectangle r;
    Triangle t;
    float w, h;

    cout << "Enter width and height: ";
    cin >> w >> h;

    p = &r;
    p->set_value(w, h);
    p->calculate_area();

    p = &t;
    p->set_value(w, h);
    p->calculate_area();

    return 0;
}
