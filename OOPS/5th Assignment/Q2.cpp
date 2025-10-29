/*Write a program to define class X, Y and Z. Each class contains one character array as a data
member. Using multiple inheritance, concatenate strings of class X and Y and store it in class Z.
Using constructor and destructors, show all the three strings.*/
#include <iostream>
#include <cstring>
using namespace std;

class X
{
protected:
    char str1[50];

public:
    X(const char s1[])
    {
        strcpy(str1, s1);
        cout << "Constructor of X called." << endl;
    }
    ~X()
    {
        cout << "Destructor of X called." << endl;
    }
};

class Y
{
protected:
    char str2[50];

public:
    Y(const char s2[])
    {
        strcpy(str2, s2);
        cout << "Constructor of Y called." << endl;
    }
    ~Y()
    {
        cout << "Destructor of Y called." << endl;
    }
};

class Z : public X, public Y
{
    char str3[100];

public:
    Z(const char s1[], const char s2[]) : X(s1), Y(s2)
    {
        strcpy(str3, str1);
        strcat(str3, str2);
        cout << "Constructor of Z called." << endl;
        cout << "String 1: " << str1 << endl;
        cout << "String 2: " << str2 << endl;
        cout << "Concatenated String (Z): " << str3 << endl;
    }
    ~Z()
    {
        cout << "Destructor of Z called." << endl;
    }
};

int main()
{
    Z obj("Hello ", "World!");
    return 0;
}
