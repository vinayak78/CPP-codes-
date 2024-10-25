// so in cpp and oops constructor also have types and its 3 there is 2 type of constucntor in oops 
// non - paramatic , parametic and copy constrcutor 
#include<iostream>
using namespace std;
class teacher{
    public :
    // non - parametric constructor
    teacher(){
        cout<<"hi i am a constructur";
    }
    // parametric 
    teacher(string name , string dpt){
        this->name = name;
        this->dpt = dpt;
    }
    //copy 
    teacher(teacher &t1){
        this->name = t1.name;
        this->dpt = t1.dpt;
    }
    string name;
    string dpt ;
    double serialnumber;

};
int main(){
    teacher t1("shunaksi" , "maths");
    // t1.name = "shunakshi";
    // t1.dpt = "maths";
    cout<<t1.name<<" "<<t1.dpt<<'\n';
    teacher t2(t1);
    cout<<t1.name<<" "<<t1.dpt<<'\n';
}