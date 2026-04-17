#include<iostream>
using namespace std;
class student 
{
    public:
        int id,age;
        string name;
    void study()
    {
        cout<<"student is studied in 5 std";
    }
};
int main()
{
    student s;
    s.id=1;
    s.age=23;
    s.name="riya";
    s.study();
    cout<<"id="<<s.id<<endl;
    cout<<"name="<<s.name<<endl;
    cout<<"age="<<s.age<<endl;
}