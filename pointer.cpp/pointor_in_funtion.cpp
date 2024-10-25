#include<iostream>
using namespace std;
void minMax(int arry[] , int size , int *min , int *max){
    
    for(int i = 1 ; i < size ; i++){
        if(arry[i] < *min){
            *min = arry[i];
        }
        if(arry[i] > *max){
            *max = arry[i];
        }
    }
}
int main(){
    int arry[5] = {1,2,3,4,5};
    int min , max ;
    min = arry[0];
    max = arry[0];
    minMax(arry , (sizeof(arry)/sizeof(int)) , &min , &max);
    cout<<"min : "<<min<<" "<<"max : "<<max;
}