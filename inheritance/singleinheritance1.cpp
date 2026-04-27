#include<iostream>
using namespace std;
class vehicle 
{
    public:
        string name;
    vehicle(string n)
    {
        name=n;
    }
};
class car:public vehicle
{
    public:
    int modelno,price;
    string color;
        car(int m,int p,string c,string n):vehicle(n)
        {
            modelno=m;
            price=p;
            color=c;
        }
};
int main()
{
    car c(12,2000000,"blue","bmw");
    

}