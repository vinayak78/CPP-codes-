#include<iostream>
using namespace std;
void print(void *grade, char type){
    if(type == 'c')  cout<<*(char*)grade<<endl;
    if(type == 'i')  cout<<*(int*)grade<<endl;
}
int main(){
    char grade = 'A';
    int rollNo = 55;
    print(&grade,'c');
    print(&rollNo,'i');
}