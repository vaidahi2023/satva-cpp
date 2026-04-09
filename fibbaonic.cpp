// 0 1 1 2 3 5 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,i;
    cout<<"enter the number:";
    cin>>n;
    a=0;
    b=1;
    cout<<a<<endl<<b<<endl;
    i=2;
    do 
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        i++;
    }while(i<n);

}