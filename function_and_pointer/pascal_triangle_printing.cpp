//code for pascal triangle priting
#include<iostream>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i = 1 ; i <= n ; i++){
        f *= i;
    }
    return f;
}
int main(){
    int num,fn,fr,fc; 
    cout<<"Enter num : ";
    cin>>num;
    for(int i = 0 ; i < num ; i++){
        for(int j = 1 ; j <= num-i ; j++){
            cout<<" ";
        }
        for(int k = 0 ; k <= i ; k++){
             fn = fact(i);
             fr = fact(k);
             fc = fact((i - k));
             cout<<" "<<fn/(fr * fc);
        }cout<<'\n';
    }
}