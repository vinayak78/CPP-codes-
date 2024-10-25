// meaning of recursion -> recursion mean when a funtion call itself is know as recursion (recursion funtion can also be use insted of loops)
#include<iostream>
using namespace std;
int print(int n){
    if(n == 0) return 0;
    cout<<n<<'\n';
    print(n-1);  //funtion calling itself again and again untill the stament match and funtion return
    }
int main(){
int n ;
cout<<"Enter N : ";
cin>>n;
print(n);
return 0;
}