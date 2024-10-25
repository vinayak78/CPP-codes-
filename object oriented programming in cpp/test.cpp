#include<iostream>
using namespace std;
class student{
    public :
    string name;
    int rollno;
    double* cgp;
    student(){
        cgp = new double;
    }
    student(student &s){
        name = s.name;
        rollno = s.rollno;
        cgp = new double;
        *cgp = *s.cgp;
    }
    void display(){
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<*cgp<<endl;
    }
};
int main(){
student s1;
s1.name = "harshit";
s1.rollno = 55;
*s1.cgp = 7.5;

student s2 = s1;
s1.display();
s2.display();
s2.name = "satakshi";
s2.display();
}