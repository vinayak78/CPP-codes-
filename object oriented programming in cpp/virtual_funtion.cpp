#include<iostream>
using namespace std;
class Instrument{
    public: 
        virtual void makesound(){
            cout<<"instrument playing...\n";
        }
};

class Accordion:public Instrument{
    public: 
        void makesound(){
            cout<<"Accordion playing...\n";
        }
};
int main(){
    Instrument *i1 = new Accordion();
    i1->makesound();
    delete i1;
}