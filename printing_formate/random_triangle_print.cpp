#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number => ";
    cin>>num;
    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= i ; j++){
            if(i%2 == 0){
                cout<<j<<" ";
            }
            else{
                cout<<(char)(j+64)<<" ";
            }
        }cout<<'\n';
    }
    return 0;
}