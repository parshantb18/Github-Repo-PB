/*Write a C++ program to demonstrate example of hierarchical inheritance to get square
and cube of a number.*/
#include <iostream>
using namespace std;
class Number
{
protected:
    int num;

public:
    void setNumber(int n)
    {
        num = n;
    }
};
class Square : public Number
{
public:
    void displaySquare()
    {
        cout << "Square of " << num << " = " << num * num << endl;
    }
};
class Cube : public Number
{
public:
    void displayCube()
    {
        cout << "Cube of " << num << " = " << num * num * num << endl;
    }
};
int main()
{
    Square s;
    Cube c;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    s.setNumber(n);
    c.setNumber(n);
    s.displaySquare();
    c.displayCube();
    return 0;
}