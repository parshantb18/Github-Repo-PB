/*Verify the following about destructor by writing the program:
 (i)Name should begin with tilde sign(~) and must match class name.
 (ii)There cannot be more than one destructor in a class.
 (iii)Destructors do not allow any parameter.
 (iv)They do not have any return type, just like constructors.

When you do not specify any destructor in a class, compiler generates a default
destructor and inserts it into your code.*/
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0)
    {
        value = v;
        cout << "Constructor called, value = " << value << endl;
    }

    // Destructor (i) name starts with ~ and matches class name
    ~Number()
    {
        cout << "Destructor called, value = " << value << endl;
    }

    // (ii) There cannot be more than one destructor
    // If you try to declare another destructor like:
    // ~Test(int x) { }   <-- ERROR (destructors cannot have parameters)
    // compiler will give error.

    // (iii) Destructors do not allow parameters
    // (iv) Destructors have no return type (not even void)
};

int main()
{
    cout << "Creating first object n1" << endl;
    Number n1(10);

    cout << "Creating second object n2..." << endl;
    Number n2(20);

    cout << "Exiting main function..." << endl;
    // When main ends, destructors are automatically called
    return 0;
}
