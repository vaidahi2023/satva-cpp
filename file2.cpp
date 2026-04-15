#include<iostream>
#include<fstream>
using namespace std;
// ios:app -- apppend the text
int main()
{
    fstream f("filedemo.txt",ios::out | ios::in);
    
    f.close();
}