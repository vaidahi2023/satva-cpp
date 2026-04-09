#include<iostream>
using namespace std;
int main()
{
    int ch,a,b,sum;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"1.addition \n2.substraction";
    cout<<"\nEnter the choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            sum=a+b;
            cout<<"sum="<<sum;
            break;
        case 2:
            sum=a-b;
            cout<<"sub="<<sum;
            break;    
    }

}