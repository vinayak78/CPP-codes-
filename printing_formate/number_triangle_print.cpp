#include <iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the number => ";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout <<j<<" ";
        }
        cout << '\n';
    }

    return 0;
}
