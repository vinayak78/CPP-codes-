// construction are a specific ttype of funtion which invoke when a object its created it main work is to allocate memory for the object (by default there is a constructor in compiler but we can also creat own) like this
#include <iostream>
using namespace std;
class deaultCons
{
    // deafault constructor
public:
    string firstName;
    string lastName;
    int age;

    void display(){
        cout<<firstName<<endl;
        cout<<lastName<<endl;
        cout<<age<<endl;
    }
};
class parametricConstruct
{
public:
    // paramteric constructor
    parametricConstruct(string firstName, string lastName, int age)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
    }
    string firstName;
    string lastName;
    int age;

    void display(){
        cout<<firstName<<endl;
        cout<<lastName<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    deaultCons u1;
    u1.display();
    parametricConstruct p1("vinayak" , "kumar" , 18);
    p1.display();
}