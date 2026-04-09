#include<iostream>
using namespace std;
int main()
{
    int n,cube,sum=0,temp;
    cout<<"Enter the number:";
    cin>>n;
    temp=n;
    for(;n>0;)
    {
        cube=n%10;
        sum=sum+cube*cube*cube;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"it is armstrong number";
    }
    else 
    {
        cout<<"it is not a armstrong number";
    }
}