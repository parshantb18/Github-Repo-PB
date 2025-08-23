/*Write a program to pass an object as an argument and return the object from a 
function.
 b. Use pass-by-address*/

 #include <iostream>
using namespace std;

class Number {
    int value;
public:
    void setValue() {
        int v;
        cout<<"Enter the value:";
        cin>>v;
        value = v;
    }
    void display() {
        cout << value << endl;
    }
    Number add(Number *n) {
        Number temp;
        temp.value = value + n->value;  
        return temp;                  
    }
};

int main() {
    Number n1, n2, result;
    n1.setValue();
    n2.setValue();
    result = n1.add(&n2);
    cout << "Result after addition: ";
    result.display();
    return 0;
}
