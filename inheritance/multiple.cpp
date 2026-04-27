#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"it is A class method";
    }
};
class B
{
    public:
        void display1()
        {
            cout<<"it is B class method";
        }
};
class C:public A,public B 
{
    public:
        void display2()
        {
            cout<<"it is C class method";
        }
};
int main()
{
    C c;
    c.display();
    c.display1();
    c.display2();
}