#include<iostream>
using namespace std;
int main(){
    int arry[] = {1,45,56,76,45,87,98,665,454,34,35,565,3556,5645,4,656};
    int mx = INT16_MIN;
    int size = sizeof(arry) / sizeof(int);
    for(int i = 0 ; i < size ; i++){
        mx = max(mx,arry[i]);
    }
    int smx = INT16_MIN;
     for(int i = 0 ; i < size ; i++){
        if(arry[i] != mx) smx = max(smx,arry[i]);
     }
     cout<<mx<<"\n";
     cout<<smx;
}