/*Redefine the above program by creating an array of objects of the class Rectangle and 
calculate area for each object calling different constructors. Also implement 
constructors with default arguments and destructor in this program.*/
#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    Rectangle(int x){
        length = x;
        breadth = x;
    }
    int area(){
        return length*breadth;
    }
    ~Rectangle() {
        cout << "Destructor called for Rectangle with length = "
             << length << " and breadth = " << breadth << endl;
    }
};
int main() {
    Rectangle rect[3] = {
        Rectangle(),       
        Rectangle(5),      
        Rectangle(4, 6)    
    };
    for (int i = 0; i < 3; i++) {
        cout << "Area of Rectangle " << i + 1 << " = " << rect[i].area() << endl;
    }
    return 0;
}
