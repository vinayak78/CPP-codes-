#include<iostream>
using namespace std;
int fact(int n){ 
    int f = 1 ;
    for(int i = 1 ; i <= n ; i++){
        f *= i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int fn = fact(n);
    int fp = fact((n - r));
    int per = fn / fp ;
    cout<<"Permutation : "<<per;
}