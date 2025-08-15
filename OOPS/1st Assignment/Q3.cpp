/*WAP to demonstrate for, while, do-while (with all possible variations), like for loop 
can be demonstrated without giving initialization in for construct or without giving 
increment in for construct.*/

#include<iostream>
using namespace std;
int main(){
    int i=0;
    do{
        cout<<"hello world"<<endl;
        i++;
    }
    while(i<5);
    return 0;
}