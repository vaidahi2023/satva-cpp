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
    int a[5],i,j,temp;
    cout<<"enter the elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
}