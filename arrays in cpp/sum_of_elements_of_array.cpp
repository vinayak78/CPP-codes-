#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for(int i = 0 ; i < sizeof(arr)/sizeof(int); i++){
        sum +=arr[i];
    }
    printf("%d",sum);
    return 0;
}