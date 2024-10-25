//array and its syntax (array is set of coolection of similar data types in simple words it a list of data)
#include<iostream>
using namespace std;
int main(){
int arr[5]; //declaration
//we can initalise array like this 
// arr[0] = 1;
// arr[1] = 2;
// and so on , but its take so time and codes of lines so we use loops for initilizing arrays
for(int i = 0 ; i < 5 ; i++){
    cin>>arr[i];
}
for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
}
return 0;
}