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
int main()
{
    B b;
    C c;
    b.display();
    b.display1();
    c.display();
    c.display2();
}