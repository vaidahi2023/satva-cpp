#include<iostream>
using namespace std;
class payment
{
    public:
     virtual void pay(int amount)=0;
};
class creditcard:public payment
{
    public:
    void pay(int a)
    {
        cout<<"your amount is "<<a;
    }
    void display()
    {
        cout<<"it is credit card class";
    }
};
class upi:public payment
{
    public:
    void pay(int a)
    {
        cout<<"your amount is "<<a;
    }
    void display()
    {
        cout<<"it is upi class";
    }
};
int main()
{
    creditcard c;
    c.display();
    c.pay(3000);
    upi u;
    u.pay(4000);
}