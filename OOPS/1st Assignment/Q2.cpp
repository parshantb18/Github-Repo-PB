/*Write a C++ program that will ask for a temperature in Celsius and display it in
degree Fahrenheit.[F=9C/5+32] */

#include <iostream>
using namespace std;
int main()
{
    int C, F;
    cout << "Enter the temperature in celsius:";
    cin >> C;

    F = (9 * C / 5) + 32;

    cout << "The resultant temperature in fahrenheit is:" << F << endl;
    return 0;
}