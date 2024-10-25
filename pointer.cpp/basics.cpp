// pointor are special type of varibale which store address of another variable so we can say pointor point to the another varibale 
#include<iostream>
using namespace std;
int main(){
int c = 5 ;
int* ptr = &c; // "*" derefrence operator and "&" operator 
cout<<ptr<<endl;
cout<<&c<<endl;
cout<<c<<endl;
*ptr = 10;
cout<<*ptr<<endl;
cout<<c<<endl;
return 0;
}