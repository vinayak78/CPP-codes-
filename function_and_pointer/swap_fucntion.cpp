#include<iostream>
using namespace std;
int swap(int &a , int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    // a = a + b;
    // b = a - b;
    // a = a - b;
}
int main(){
    int x , y ;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    swap(x,y);
    cout<<"After swap x : "<<x<<" and y : "<<y;
return 0;
}