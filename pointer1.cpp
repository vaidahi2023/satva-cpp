#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    p=&a;
    cout<<"Enter the number:";
    cin>>*p;
    cout<<"value of a is "<<(*p)<<endl;
    cout<<"address of a is"<<p<<endl;

}