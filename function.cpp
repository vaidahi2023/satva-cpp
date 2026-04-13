#include<iostream>
using namespace std;
//without argument without return
void sum(); //function declare
// void sum() //function define
// {
//     int a,b,sum=0;
//     cout<<"Enter the number:";
//     cin>>a>>b;
//     sum=a+b;
//     cout<<"sum="<<sum;
// }
int main()
{
    sum(); //fucntion call

}
void sum() //function define
{
    int a,b,sum=0;
    cout<<"Enter the number:";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum="<<sum;
}