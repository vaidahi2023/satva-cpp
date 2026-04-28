#include<iostream>
using namespace std;
class shape
{
    public:
        virtual void area();
};
class rectangle:public shape
{
   public:
    void area()
    {
        int l,b,a;
        cout<<"Enter the length and breadth:";
        cin>>l>>b;
        a=l*b;
        cout<<"area of rectangle is "<<a;
    }
};
int main()
{
    rectangle r;
    r.area();
}