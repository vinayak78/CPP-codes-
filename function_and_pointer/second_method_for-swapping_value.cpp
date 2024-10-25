#include<iostream>
using namespace std;
int main(){
int x , y ;
cout<<"Enter x : ";
cin>>x;
cout<<"Enter y : ";
cin>>y;
x = x + y;
y = x - y;
x = x - y;
cout<<"After swape x : "<<x<<" and y : "<<y;
return 0;
}