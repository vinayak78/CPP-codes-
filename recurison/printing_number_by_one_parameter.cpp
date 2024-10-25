#include<iostream>
using namespace std;
int print(int n){
    if(n == 0) return 0;
    print(n-1);  
    cout<<n<<'\n';
    }
int main(){
int n ;
cout<<"Enter N : ";
cin>>n;
print(n);
return 0;
}