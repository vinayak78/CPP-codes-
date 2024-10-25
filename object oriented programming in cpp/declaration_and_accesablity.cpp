#include<iostream>
#include<string>
using namespace std;
class teacher{
    //properties / attributes
    public:
    string name;
    string dept;
    string subject;
    int serialnumber;
    double salary;

    //method / memeber funtion 
    void chaneeDept(string newDept){
        dept = newDept;
    }
};
int main(){
teacher t1;
t1.name = "Aditi";
t1.dept = "Computer Science";
t1.subject = "Coding and Programming";
t1.serialnumber = 7678;
t1.salary = 55000.00;
cout<<t1.dept<<'\n';
// t1.chaneeDept("Mathematics");
// cout<<t1.dept<<'\n';
return 0;
}