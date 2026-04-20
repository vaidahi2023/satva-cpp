#include<iostream>
using namespace std;
class example 
{
    public:
        int id;        // defualt constructor
        example()
        {
            cout<<"defualt constructor";
        }
        //parametized constructor
        example(int a,int b)
        {
            cout<<"value of a is "<<a;
            cout<<"value of b is "<<b;
        }
        example(example &e1)
        {
            id=e1.id;
        }
};
int main()
{
    example e;
    example e1(12,9);
    e.id=1;
    example e2(e);
    cout<<"e2 id"<<e2.id;
}

