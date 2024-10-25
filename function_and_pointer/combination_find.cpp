//code for finding the combination 
#include<iostream>
using namespace std;
int fact(int n){ //funtion declaration and defenation
    int f = 1 ;
    for(int i = 1 ; i <= n ; i++){
        f *= i;
    }
    return f;
}
int main(){
    int n , r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int c = n - r;
    //reusing funtion for factorial
    int fn = fact(n); //fucntion call
    int fr = fact(r); //fucntion call
    int fc = fact(c); //fucntion call
    cout<<"Combination : "<<fn/(fr * fc);
    return 0;
}