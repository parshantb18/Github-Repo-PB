/*Create code snippets that illustrates the use of scope resolution operator (: :) for the 
following uses:
 c. To access a class’s static variables*/

 #include <iostream>
using namespace std;

class Counter {
public:
    static int count;
    void increase() { count++; }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    c1.increase();
    c2.increase();
    cout << "Count = " << Counter::count << endl;
    return 0;
}
