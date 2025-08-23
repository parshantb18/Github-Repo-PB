/*Create code snippets that illustrates the use of scope resolution operator (: :) for the 
following uses:
 b. To access a global variable when there is a local variable with same name*/

#include <iostream>
using namespace std;

int x = 100;

int main() {
    int x = 50;
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;
}
