/*Write a program that checks if an expression has balanced parentheses.*/
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr)
{
    stack<char> s;

    for (char ch : expr)
    {
        // If opening bracket → push into stack
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        // If closing bracket → check stack
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty())
                return false; // no matching opening

            char top = s.top();
            s.pop();

            // Matching check
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
            {
                return false;
            }
        }
    }

    // If stack is empty → balanced
    return s.empty();
}

int main()
{
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced Expression" << endl;
    else
        cout << "Unbalanced Expression" << endl;

    return 0;
}
