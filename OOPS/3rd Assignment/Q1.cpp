/*Create a class named 'Rectangle' with two data members- length and breadth and a 
function to calculate the area which is 'length*breadth'. The class has three constructors
 which are :
 (a) having no parameter - values of both length and breadth are assigned zero.
 (b) having two numbers as parameters - the two numbers are assigned as length and  
     breadth respectively.
 (c) having one number as parameter - both length and breadth are assigned that number.
 Now, create objects of the 'Rectangle' class having none, one and two parameters and 
print their areas.*/
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    //(a)no parameters
    Rectangle(){
        length=0;
        breadth=0;
    }
    //(b)2 parameters
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    //(c)one parameter
    Rectangle(int a){
        length=a;
        breadth=a;
    }
    int Area(){
        return length*breadth;
    }
};
int main(){
    Rectangle r1;
    cout << "Area of rectangle with no parameter: " << r1.Area() << endl;
    Rectangle r2(2);
    cout << "Area of rectangle with one parameter: " << r2.Area() << endl;
    Rectangle r3(3,6);
    cout << "Area of rectangle with two parameters: " << r3.Area() << endl;
    return 0;
}