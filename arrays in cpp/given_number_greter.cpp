#include<iostream>
using namespace std;
int main(){
    int arry[10];
    for(int i = 0 ; i < 10 ; i++){
        cout<<i<<" : ";
        cin>>arry[i];
    }
    int checknumber , count;
    count = 0;
    cout<<"Enter the checking number : ";
    cin>>checknumber;
    for(int i = 0 ; i < 10 ; i++){
        if(arry[i] < checknumber){
            count++;
        }
    }
    cout<<count;
    }