// file 
// ifstream -- read the file
// ofstream -- write the file
// fstream -- read,write file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f("filedemo.txt");
    f<<"hello this is cpp file";
    f.close();
}