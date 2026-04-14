#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[20],ch1[20];
    cout<<"enter the string:";
    cin>>ch;
    cout<<"enter the string:";
    cin>>ch1;
    cout<<"length="<<strlen(ch)<<endl;
    cout<<"lower="<<strlwr(ch)<<endl;
    cout<<"upper="<<strupr(ch)<<endl;
    cout<<"reverse="<<strrev(ch)<<endl;
    cout<<"compare="<<strcmp(ch,ch1)<<endl;
    cout<<"copy="<<strcpy(ch,ch1);
}