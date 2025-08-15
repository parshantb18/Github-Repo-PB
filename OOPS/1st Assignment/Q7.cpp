/*Define a class named Complex with properties (real and imaginary) and methods as 
per following details. 
void set () to initialize object values. 
void display () to display complex number. 
Complex sum (Complex) or void sum (Complex) to add two complex numbers 
(objects of Complex class) and return complex_number (object of Complex 
class) as result. 
Properties (real and imaginary) of the code should have private access modifier and 
member functions should have public access modifier in C++ class. */
#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imaginary;
public:
    void set(float r, float i) {
        real = r;
        imaginary = i;
    }
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
    Complex sum(Complex c) {
        Complex temp;
        temp.set(real + c.real, imaginary + c.imaginary);
        return temp;
    }
};
int main() {
    Complex c1, c2, c3;
    c1.set(1.5, 3.3);
    c2.set(1.8, 4.5);
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    c3 = c1.sum(c2);
    cout << "Sum of Complex Numbers: ";
    c3.display();
    return 0;
}

