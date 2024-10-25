//we can also use pointer for swapping variable by passing there address
#include<iostream>
using namespace std;
int swap(int* a ,int* b){
    int temp ;
    temp = *a ;
    *a = *b;
    *b = temp;
}
int main(){
int x , y;
cout<<"Enter X : ";
cin>>x;
cout<<"Enter y : ";
cin>>y;
swap(&x,&y);
cout<<"After swap a : "<<x<<" and y : "<<y;
return 0;
}