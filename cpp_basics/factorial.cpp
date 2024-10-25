#include<iostream>
using namespace std;
int main(){
double num ;
cout<<"Enter the number => ";
cin>>num;
double fact = 1;
for (double i = 1 ; i < num; i++){
    fact *= i;
}
cout<<"The factorial of "<<num<< " = " << fact;

return 0;
}