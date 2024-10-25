#include<iostream>
using namespace std;
class student {
public:
    string name;
    string subject;

   void display(){ 
        cout<<name<<endl;
        cout<<subject<<endl;
    }
};
int main(){
    int *ptr = new int(10); //for array
    cout<<*ptr<<endl;
    double *ptr1 = new double; //for float
    *ptr1 = 45.54;
    cout<<*ptr1<<endl;
    int *ptr3 = new int[10]; //for array
    student *ptr4 = new student;
    ptr4->name = "sunakshi";
    ptr4->subject = "maths";
    ptr4->display();
    delete ptr;
    delete ptr1;
    delete[] ptr3;
    delete ptr4;
    
}