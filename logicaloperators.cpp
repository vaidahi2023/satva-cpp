// logical operators --&& ,||,!
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a;
    cin>>b;
    cout<<"a>b && a==12 = "<<((a>b) && (a==12))<<endl;
    cout<<"a<b || a==12 = "<<((a<b)|| a==12)<<endl;
    cout<<"a<=b="<<!(a<=b)<<endl;
    

}