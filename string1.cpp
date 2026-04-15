#include<iostream>
using namespace std;
int main()
{
    string s="hello world";
    cout<<s;
    cout<<"\nlength="<<s.length()<<endl;
    cout<<"substr="<<s.substr(0,4)<<endl;
    cout<<"append="<<s.append("java")<<endl;
    cout<<"find="<<s.find("l")<<endl;
    cout<<"compare"<<s.compare("hello");
}