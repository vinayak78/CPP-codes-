#include<iostream>
using namespace std;
int main(){
    int row , column ;
    cout<<"Enter row , column";
    cin>>row , column;
    
    int* rowptr = new int[row];

    for(int i = 0 ; i<row ; i++){
        int *columnptr = new int[column];
    }

}