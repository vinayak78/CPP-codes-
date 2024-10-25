#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num => ";
    cin>>num;
    for(int i = 0 ; i < num ; i++){
        for(int j = 0; j <= i ; j++ ){
            cout<<(char)(j+65)<<" ";
        }cout<<'\n';
    }
    return 0;
}