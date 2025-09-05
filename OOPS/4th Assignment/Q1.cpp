/*Most of the time we use public mode of inheritance, for example class Derived:
public Base{}  Try protected and private access modifiers to understand the difference
of various modes of inheritance.*/

#include <iostream>
using namespace std;

class Base
{
public:
    int pub = 1;

protected:
    int prot = 2;

private:
    int priv = 3;
};

class PublicDerived : public Base
{
public:
    void show()
    {
        cout << "Public Inheritance: " << pub << " " << prot << endl;
    }
};

class ProtectedDerived : protected Base
{
public:
    void show()
    {
        cout << "Protected Inheritance: " << pub << " " << prot << endl;
    }
};

class PrivateDerived : private Base
{
public:
    void show()
    {
        cout << "Private Inheritance: " << pub << " " << prot << endl;
    }
};

int main()
{
    PublicDerived d1;
    d1.show();
    cout << "Access pub outside (public inheritance) = " << d1.pub << endl;

    ProtectedDerived d2;
    d2.show();

    PrivateDerived d3;
    d3.show();

    return 0;
}