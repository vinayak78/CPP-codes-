#include<iostream>
using namespace std;
int main(){
int num ; 
cout<<"Enter the number => ";
cin>>num;
for(int i = 1 ; i <= num ; i++){
    {
        for(int j = 1 ; j <= num-i ; j++){
            cout<<"  ";
        }
        for(int k = 0 ; k <= num ; k++){
            cout<<"*";
        }
    }cout<<'\n';
}
return 0;
}