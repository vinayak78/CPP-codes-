// polymorphism allows object to bhehave differrently depending on the context it is in 
#include<iostream>
using namespace std;
class person{
    public:
    string name;
    person(){
        cout<<" i am constructor";
    }
    person(string n){
        this->name = n;
    }
    void display(){
        cout<<name;
    }
};
int main(){
person p1("vinayak");
p1.display();
}