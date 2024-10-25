//code for calculating the power of given number
#include<iostream>
using namespace std;
int power(int n , int pow){
    if(pow == 0) return 1;
    return n * power(n,pow-1);
}
int main(){
    int n , pow;
    cout<<"Enter n and pow : ";
    cin>>n>>pow;
    cout<<power(n,pow);
}