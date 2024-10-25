// inheritance means copying the exting class into new class the class which from paramter and funtion member will copy is base/parents class and the class which copy the data is knwo as base/derived class 
#include<iostream>
using namespace std;
class teacher{
public :
    string name;
    string subject;
    teacher(){
        cout<<"hello i am teacher constructor"<<endl;
    }
    void display(){
        cout<<name<<endl;
        cout<<subject<<endl;
    }
    ~teacher(){
        cout<<"Hello i am teacher destructure"<<endl;
    }
};

class student : public teacher{
public :
    int rollno;
     student(){
        cout<<"hello i am student constructor"<<endl;
    }
    void display(){
        cout<<name<<endl;
        cout<<subject<<endl;
        cout<<rollno<<endl;
    }

    ~student(){
        cout<<"Hello i am student destructure"<<endl;
    }
    
};
int main(){
    student s1;
    s1.name = "vinayak";
    s1.subject = "Computer Science";
    s1.rollno = 55;
    s1.display();
}