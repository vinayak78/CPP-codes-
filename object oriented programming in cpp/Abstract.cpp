#include<iostream>
using namespace std;
class a{
    public:
    virtual void show() = 0;
    void display(){
        cout<<"Hi am abs class";
    } 
}; 
class b : public a{
    public:
    void show(){
        cout<<"Hi am i drived class";
    } 
};
int main(){
    b ob;
    ob.display();
    cout<<endl;
    ob.show();
}