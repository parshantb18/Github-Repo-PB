/*Write a C++ program to compute area of right angle triangle, equilateral triangle,
isosceles triangle using function overloading concept.*/
#include <iostream>
#include <cmath>
using namespace std;

// Right-angled triangle
float area(float base, float height)
{
    return 0.5 * base * height;
}

// Equilateral triangle
float area(float side)
{
    return (sqrt(3) / 4) * side * side;
}

// Isosceles triangle
float area(float base, float equalSide, bool isIso)
{
    float height = sqrt(equalSide * equalSide - (base * base) / 4);
    return 0.5 * base * height;
}

int main()
{
    float base, height, side, equalSide;

    cout << "Enter base and height for right-angled triangle: ";
    cin >> base >> height;
    cout << "Area of Right-Angled Triangle = " << area(base, height) << endl;

    cout << "\nEnter side for equilateral triangle: ";
    cin >> side;
    cout << "Area of Equilateral Triangle = " << area(side) << endl;

    cout << "\nEnter base and equal side for isosceles triangle: ";
    cin >> base >> equalSide;
    cout << "Area of Isosceles Triangle = " << area(base, equalSide, true) << endl;

    return 0;
}
