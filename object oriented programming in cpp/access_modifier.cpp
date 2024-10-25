/* There are total three types of access modifier in cpp
 1. private : data and methods accessible inside class
 2. public : data and methods accessible to everyone
 3. protected : data and methods accessible inside class and to its derived class*/
#include <iostream>
using namespace std;
class student
{
    // by default its private so we acces modifier flag too convert it into public like this
public:
    string name;
    string standerd;
    int rollNumber;
    // these funtion call setter
    double enterFees(double f)
    {
        fees = f;
    }
    // and this one call getter
    double getFees()
    {
        return fees;
    }

private:
    double fees; // we can not able to access these attribute but there is still a another indirect way to do it (ofc by public member funtion)
};
int main()
{
    student s1;
    s1.name = "Rahul";
    s1.standerd = "5th";
    s1.rollNumber = 18;
    s1.enterFees(50000.00); // it assign value to fees (which is private attribute )
    cout << s1.name << '\n';
    cout << s1.standerd << '\n';
    cout << s1.rollNumber << '\n';
    cout << s1.getFees() << '\n'; // accessing private attribute
}