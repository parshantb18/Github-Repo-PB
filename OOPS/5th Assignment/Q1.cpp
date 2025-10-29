/*Implement a C++ program to define three classes Alpha, Beta and Gamma, each class
having private data members. Gamma is a class derived from Alpha and Beta (by applying
multiple inheritance). Use constructors and destructors to read and display data.*/
#include <iostream>
using namespace std;

class Alpha
{
private:
    int a;

public:
    Alpha()
    {
        cout << "Enter value for Alpha (a): ";
        cin >> a;
    }
    void showAlpha()
    {
        cout << "Alpha (a) = " << a << endl;
    }
    ~Alpha()
    {
        cout << "Destructor of Alpha called" << endl;
    }
};

class Beta
{
private:
    int b;

public:
    Beta()
    {
        cout << "Enter value for Beta (b): ";
        cin >> b;
    }
    void showBeta()
    {
        cout << "Beta (b) = " << b << endl;
    }
    ~Beta()
    {
        cout << "Destructor of Beta called" << endl;
    }
};

class Gamma : public Alpha, public Beta
{
private:
    int c;

public:
    Gamma()
    {
        cout << "Enter value for Gamma (c): ";
        cin >> c;
    }
    void showGamma()
    {
        cout << "Gamma (c) = " << c << endl;
    }
    void displayAll()
    {
        cout << "\n--- Displaying Data ---" << endl;
        showAlpha();
        showBeta();
        showGamma();
    }
    ~Gamma()
    {
        cout << "Destructor of Gamma called" << endl;
    }
};

int main()
{
    cout << "Creating object of Gamma...\n";
    Gamma g1;
    g1.displayAll();

    cout << "\nProgram ending, destructors will be called automatically.\n";
    return 0;
}
