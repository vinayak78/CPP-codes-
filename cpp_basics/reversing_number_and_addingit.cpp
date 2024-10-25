#include <iostream>
using namespace std;
int main()
{
    int num, r;
    r = 0;
    cout << "Enter the number => ";
    cin >> num;
    int addnum = num;
    while (num != 0)
    {
        int ld = num % 10;
        r *= 10;
        r += ld;
        num /= 10;
    }
    cout << "The rverse of all digit => " << r << "\n";
    cout << "The sum of before reversing and after rversing the number is => " << addnum + r;
    return 0;
}