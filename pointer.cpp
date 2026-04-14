#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"address of a without pointer="<<&a;
    p=&a;
    cout<<"\naddress of a with pointer="<<p;
    cout<<"\nvalue of a is"<<*p;

}