#include<iostream>
using namespace std;
int main(){
cout<<"hello world";
int num , r;
r = 0;
cout<<"Enter the number => ";
cin>>num;
while (num!=0){
    int ld = num % 10;
    r *= 10;
    r += ld;
    num /= 10; 
}
cout<<"The rverse of all digit => "<<r;
return 0;
}