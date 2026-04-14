struct student 
{
    int id;
    char name[20];
    int age;
};
#include<iostream>
using namespace std;
int main()
{
    struct student s1,s2;

    cout<<"Enter the id:";
    cin>>s1.id;
    cout<<"Enter the name:";
    cin>>s1.name;
    cout<<"Enter the age:";
    cin>>s1.age;
    cout<<"id="<<s1.id<<endl;
    cout<<"name="<<s1.name<<endl;
    cout<<"age="<<s1.age;
}

// vehicle-- modelno,price,name,color
