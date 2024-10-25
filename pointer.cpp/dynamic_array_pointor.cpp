#include<iostream>
using namespace std;
int main(){
    int size ;
    cout<<"Enter size : ";
    cin>>size;
    int *myarry = new int[size];
    for(int i = 0 ; i < size ; i++){
        cin>>myarry[i];
    }
    for(int i = 0 ; i < size ; i++){
        cout<<myarry[i]<<" ";
    }
    delete[] myarry;
}