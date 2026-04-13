// 1 2 3 4 5
//12 4 89 3 6
//4 12 89 3 6
//4 12 3 89 6
//4 3 12 6 89
//4 3 6 12 89
//3 4 6 12 89

#include<iostream>
using namespace std;
int main()
{
    int a[20],i,size,ele,pos;
    cout<<"Enter the size:";
    cin>>size;
    cout<<"enter the elements:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element:";
    cin>>ele;
    cout<<"Enter the position:";
    cin>>pos;
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=ele;
    size++;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}
