/*Given a string, reverse it using STACK. For example “DataStructure” should be output as 
“erutcurtSataD.” */
#include <iostream>
using namespace std;

class Stack {
private:
    char arr[100];
    int topIndex;
public:
    Stack() {
        topIndex = -1;
    }
    void push(char ch) {
        if (topIndex < 99) {
            arr[++topIndex] = ch;
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }
    void pop() {
        if (topIndex >= 0) {
            topIndex--;
        } else {
            cout << "Stack Underflow!" << endl;
        }
    }
    char top() {
        if (topIndex >= 0) {
            return arr[topIndex];
        }
        return '\0';
    }
    bool empty() {
        return (topIndex == -1);
    }
};

int main() {
    string str = "DataStructure";
    Stack s;
    for (char ch : str) {
        s.push(ch);
    }
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversed << endl;

    return 0;
}
