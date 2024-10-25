// encapsulation means wraping of all data and value and menber in one unite (properties/anttributes + funtion member/methods) (we can hide sensitive information or data in it with private)
#include<iostream>
using namespace std;
class bankAcoount{
 private:
    double accpass;
 public :
    string username;
    int accountnumber;
    void setter(double p){
        accpass = p;
    }
    double getter(){
        return accpass;
    }
};
int main(){
bankAcoount b1;
b1.username = "vinayak";
b1.accountnumber = 45168;
// we can not able to acces the accpass becuz its private 
b1.setter(2567);
cout<<b1.username<<" "<<b1.accountnumber<<" "<<b1.getter();
}