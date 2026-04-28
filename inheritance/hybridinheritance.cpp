#include<iostream>
using namespace std;
// hirechical +multiple
class A
{
    public:
    void display()
    {
        cout<<"it is A class method";
    }
};
class B:public A
{
    public:
        void display1()
        {
            cout<<"it is B class method";
        }
};
class C:public A 
{
    public:
        void display2()
        {
            cout<<"it is C class method";
        }
};
class D:public B,public C 
{
    public:
        void display3()
        {
            cout<<"it is D class method";
        }
};
int main()
{
    D d;
    d.B::display();
    d.display1();
    d.display2();
    d.display3();
}