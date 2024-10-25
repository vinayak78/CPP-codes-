//pointer use to store the address of another varibale so in simple words pointer pointes to a variable
#include<iostream>
using namespace std;
int main(){
int n = 5;
// & address operator use for accessing and prinitng address of operator
cout<<&n<<'\n';
// * reference operator use for declaring pointer 
int *p = &n; //p is and pointer which save the address of varibale n 
cout<<p<<'\n';
cout<<*p; //for accessing the value we need refrence operator 
return 0;
}