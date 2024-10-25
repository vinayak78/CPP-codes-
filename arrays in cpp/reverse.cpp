#include<iostream>
using namespace std;
int main(){
    int arry[5] = {1,2,3,4,5};
    int reversearry[sizeof(arry)/sizeof(int)];
    for(int i = 0 ; i < sizeof(arry)/sizeof(int);i++){
        reversearry[i] = arry[sizeof(arry)/sizeof(int)-1-i];
    }
    for(int val : reversearry){
        cout<<val<<" ";
    }
}