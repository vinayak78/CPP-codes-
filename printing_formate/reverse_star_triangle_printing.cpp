#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number => ";
    cin>>num;
    for(int i = num; i > 0 ; i--){
        for(int j = 0 ; j <= i ; j++){
            cout<<"* ";
        }cout<<'\n';
    }
    return 0;
}