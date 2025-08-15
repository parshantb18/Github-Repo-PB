/*Implement namespace in a program to illustrate the use of same name variables and 
functions in different sections/libraries of the code*/
#include <iostream>
using namespace std;
namespace Player1Runs {
    int value = 82;
    void display() {
        cout << "Player 1 has scored " << value <<" runs"<< endl;
    }
}
namespace Player2Runs {
    int value = 264;

    void display() {
        cout << "Player 2 has scored " << value <<" runs"<< endl;
    }
}
int main() {
    cout << "Accessing stats of Player 1:-" << endl;
    Player1Runs::display();

    cout << "\nAccessing stats of Player 2:-" << endl;
    Player2Runs::display();
    return 0;
}
