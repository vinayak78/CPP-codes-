#include<iostream>
using namespace std;
int main(){
    int row, column, num ;
    cout<<"Enter the number of row for rectangle => ";
    cin>>row;
    cout<<"Enter the number of column for rectangle => ";
    cin>>column;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
           cout<<(char)(i+65)<<'\t';
        }cout<<'\n';
    }
}