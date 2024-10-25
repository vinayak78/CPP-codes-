#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int prd = 1;
    for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        prd *=arr[i];
    }
    cout<<prd;
    return 0;
}