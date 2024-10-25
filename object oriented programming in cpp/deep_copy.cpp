#include<iostream>
using namespace std;
class Student{
    public :
        string name;
        int *rollNO;
        float per;
    Student(){} //default constructor
    Student(const Student& s) {
        name = s.name;    // Copy the name (string handles memory internally)
        per = s.per;      // Copy percentage (simple data type)
        
        rollNO = new int; // Allocate new memory for rollNO
        *rollNO = *(s.rollNO); // Copy the value from the original object
    }

    void display(){
        cout<<name<<endl;
        cout<<*rollNO<<endl;
        cout<<per<<endl;
    }
    ~Student(){
        delete rollNO;
    }
};


int main(){
Student s1;
s1.name = "Harshit";
s1.per = 87.5;
*s1.rollNO = 55;

Student s2(s1);
*s2.rollNO = 65;
s1.display();
s2.display();
return 0;
}