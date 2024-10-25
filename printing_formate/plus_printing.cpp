// only enter the odd number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number => ";
    cin >> num;
    int mid = num / 2 + 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            (i == mid or j == mid) ? cout << "* " : cout << "  ";
        }
        cout << "\n";
    }
}