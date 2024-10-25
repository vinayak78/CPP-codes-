#include<iostream>
using namespace std;
int funtion(){
    cout<<"hello i am funtion";
}
int main(){
    int(*funptr)() = funtion; 
    cout<<funptr();
    
}