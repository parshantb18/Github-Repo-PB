/*Write a program using Array of Objects to display area of multiple rectangles.*/

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
    void display(int i) {
        cout << "Rectangle "<<i+1<<": "<< length << " x " << breadth;
        cout << "  Area = " << area() << endl;
    }
};
int main() {
    int n, l, b;
    cout << "Enter number of rectangles: ";
    cin >> n;
    Rectangle rect[50];
    for (int i = 0; i < n; i++) {
        cout << "Enter length and breadth of rectangle " << i + 1 << ": ";
        cin >> l >> b;
        rect[i].setData(l, b);
    }
    cout << "\nAreas of Rectangles:\n";
    for (int i = 0; i < n; i++) {
        rect[i].display(i);
    }
    return 0;
}
