/*Write a program for the evaluation of a Postfix expression.*/
#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    int arr[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int val) {
        if (topIndex >= 99) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++topIndex] = val;
    }

    void pop() {
        if (topIndex < 0) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex < 0) {
            cout << "Stack Empty!" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool empty() {
        return topIndex == -1;
    }
};

int main() {
    string exp;
    cout << "Enter postfix expression: ";
    cin >> exp;

    Stack st;

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];

        if (isdigit(c)) {
            st.push(c - '0');
        }
        else {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            switch (c) {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            default:
                cout << "Invalid operator: " << c << endl;
            }
        }
    }

    cout << "Result = " << st.top() << endl;
    return 0;
}
