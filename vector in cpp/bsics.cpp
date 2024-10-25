//declaration and accessing vector 
#include<iostream>
#include<vector> //add vector header file
#include<utility> // for pair
// #include<typeinfo>
using namespace std;
void display(auto &v){
    for(auto i = v.begin() ; i != v.end() ; i++){
        cout<<*i<<" ";
    }
}
void displayPair(auto &v){
    for(auto i = v.begin() ; i != v.end() ; i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
}
int main(){
    int size , num ;
    cout<<"Size : ";
    cin>>size;
    vector<int> vec1;//declaration 
    
    // Diffrent method for declaring vector
    // vector<int> vec2(5);
    // vector<int> vec3(vec2);
    // vector<int> vec4(5,10);

    //loop for initalizing vector
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter Num : ";
        cin>>num;
        vec1.push_back(num);
    }
    display(vec1); //passing vector to display funtion
    vector<pair<int,int>> v2 =  {{1,2},{3,4},{5,6},{7,8}};
    displayPair(v2);

    // int x = 5;
    // auto y = 5;
    // auto garde = "A";
    // cout<<typeid(x).name()<<endl;
    // cout<<typeid(y).name()<<endl;
}
