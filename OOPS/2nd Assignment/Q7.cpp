/*Write a C++ program to declare const member function and attempt any operation 
within it*/

#include <iostream>
using namespace std;

class Number{
    int value;

public:
    Number(int v) {
        value = v;
    }

    void showValue() const {
        cout << "Value = " << value << endl;

        //Attempt to modify (this will cause compilation error if uncommented)
        //value = value + 10;  
    }
};

int main() {
    Number d(18);
    d.showValue();

    return 0;
}
