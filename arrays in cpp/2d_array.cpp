//2d dimesional array declaration and initalization 
#include<iostream>
using namespace std;
int main(){
    int arry[2][2];
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2; j++){
            cin>>arry[i][j];
        }
    }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2; j++){
            cout<<arry[i][j]<<" ";
        }cout<<"\n";
    }
}