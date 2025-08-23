/*Write a program to declare static public member variable, global and local variable 
with the same name. Initialize and display their contents.*/

#include <iostream>
using namespace std;
int value = 1;

class Number {
public:
    static int value;
};
int Number::value = 18;

int main() {
    int value = 7; 

    cout << "Local variable value = " << value << endl;
    cout << "Global variable value = " << ::value << endl;
    cout << "Static class variable value = " << Number::value << endl;

    return 0;
}
