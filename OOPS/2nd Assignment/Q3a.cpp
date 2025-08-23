/*Create code snippets that illustrates the use of scope resolution operator (: :) for the 
following uses:
 a. Member functions defined outside class*/

 #include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void setData(int l, int b);
    int area();
};
void Rectangle::setData(int l, int b) {
    length = l;
    breadth = b;
}
int Rectangle::area() {
    return length * breadth;
}

int main() {
    Rectangle r;
    r.setData(11, 14);
    cout << "Area = " << r.area() << endl;
    return 0;
}
