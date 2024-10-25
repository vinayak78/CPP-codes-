// we can use auto and range base loop for vector to save time like this
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8,9};
    // range base loop 
    // for(int &value : v1) for any type of task apply
    for(int value : v1){
        cout<<value<<" ";
    }
    // vector<int> :: iterator it; we can skip this 
    for(auto it = v1.begin() ; it!=v1.end() ; it++){
        cout<<*it<<" "<<endl;
    }
    // for pair vector
    cout<<"printing from loop"<<endl;
    vector<pair<int,int>> v2 =  {{1,2},{3,4},{5,6},{7,8}};
    for(auto &value : v2){
        cout<<value.first<<" "<<value.second<<endl;
    
    }
    cout<<"Priting frome iterator"<<endl;
    for(auto it = v2.begin(); it!=v2.end();it++){
        cout<<it->first << " " << it->second<<endl;
    }
}