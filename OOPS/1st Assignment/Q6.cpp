/*Create a code snippet that illustrates the following: 
a. Calling of private member functions inside public member function 
b. Access private member functions inside public member function*/

#include <iostream>
using namespace std;

class Code {
private:
    void privateFunction() {
        cout << "Private function is called" << endl;
    }

public:
    void publicFunction() {
        cout << "Public function starts" << endl;
        privateFunction();
        cout << "Public function ends" << endl;
    }
};

int main() {
    Code obj;
    obj.publicFunction();  
    // obj.privateFunction(); //cannot call directly from outside
    return 0;
}
