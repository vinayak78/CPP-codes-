#include<iostream>
using namespace std;
void p(int arry[],int size){
   for(int i=0;i<size;i++){
    cout<<arry[i]<<'\t';
   }
}
int main(){
    int arry[] = {1,2,3,4,5,6,7,8};
    p(arry,sizeof(arry)/sizeof(int));
}