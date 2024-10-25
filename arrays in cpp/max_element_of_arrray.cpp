#include<iostream>
using namespace std;
int main(){
    int arry[] = {1,2,3,4,56,78,86,44,33,45,67};
    int mx = INT16_MIN; 
    for(int i = 0 ; i < sizeof(arry)/sizeof(int);i++){
        mx = max(mx,arry[i]);
    }
    cout<<mx;
    
}