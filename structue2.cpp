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
    struct student s1[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter the id:";
    cin>>s1[i].id;
    cout<<"Enter the name:";
    cin>>s1[i].name;
    cout<<"Enter the age:";
    cin>>s1[i].age;
    }
    for(i=0;i<5;i++)
    {

        cout<<"id="<<s1[i].id<<endl;
    cout<<"name="<<s1[i].name<<endl;
    cout<<"age="<<s1[i].age;
    }
}

// vehicle-- modelno,price,name,color
