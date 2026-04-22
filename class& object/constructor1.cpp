#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    student(int i,string n)
    {
        id=i;
        name=n;  
    }
};
int main()
{
    student s(1,"riya");
    cout<<"main id="<<s.id<<endl;
    cout<<"main name="<<s.name<<endl;
}