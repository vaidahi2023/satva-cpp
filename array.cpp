#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    a[0]=1;
    a[1]=2;
    cout<<"enter the elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
}