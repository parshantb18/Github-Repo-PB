/*Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the 
remaining elements to the right.  
Note that elements beyond the length of the original array are not written. Do the above 
modifications to the input array in place and do not return anything.*/

#include<iostream>
using namespace std;
int main(){
    int n,arr[100],a[101];
    cout<<"Enter the no. of elements in your array:";
    cin>>n;
    cout<<"Enter the elements of your array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n;i>0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[j]==2){
                a[i-1]=a
            }
            a[i]=arr[j];
            
        }
    }
   




    return 0;
}