/*Implement static member function using a C++ program.*/

#include <iostream>
using namespace std;

class Counter {
    static int count;

public:
    static void setCount(int c) {
        count = c;
    }

    static void showCount() {
        cout << "Count = " << count << endl;
    }
};

int Counter::count = 0;

int main() {

    Counter::setCount(18);
    Counter::showCount();

    Counter obj;
    obj.setCount(20);
    obj.showCount();

    return 0;
}
