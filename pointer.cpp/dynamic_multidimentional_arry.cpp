#include<iostream>
using namespace std;
int main(){
    int column , row;
    cout<<"Enter : column , row";
    cin>>column , row;
    
    int **row_ = new int*[row];
    for(int i = 0 ; i < row ; i++){
        row_[i] = new int[column];
    }

    //for dealocating arry 
    for(int i = 0 ; i < row ; i++){
       delete[] row_[i];
    }
    delete row_;
    row_ = NULL;
    // system("pause>0");
    return 0;
}