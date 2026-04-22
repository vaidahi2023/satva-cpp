#include<iostream>
using namespace std;
class A
{
    private:
        int id;
    public:
        string name;
        void fun()
        {
            cout<<"this is A class method";
        }
        void setid(int i)
        {
            id=i;
        }
        int getid()
        {
            return id;
        }
};
class B:public A 
{
    public:
        void display()
        {
            cout<<"it is B class method";
        }
};
int main()
{
    B b;
    // b.display();
    // b.fun();
    b.setid(1);
    b.name="riya";
    cout<<"id="<<b.getid();
    cout<<"name="<<b.name;
}
