#include<iostream>
using namespace std;
class fun
{
    public:
        void display()
        {
            cout<<"it is display method"<<endl;
        }
    private:
        void read()
        {
            cout<<"it is read method"<<endl;
        }
};
int main()
{
    fun f;
    f.display();
    // f.read();
}