/*Write a program to define function cube() as inline for calculating cube of a number.*/

#include <iostream>
using namespace std;

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube of " << num << " = " << cube(num) << endl;
    return 0;
}
