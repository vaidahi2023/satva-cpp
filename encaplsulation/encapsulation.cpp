#include<iostream>
using namespace std;
class student{
    private:
        int id;
    public:
        void setid(int i)
        {
            id=i;
        }
        int getid()
        {
            return id;
        }
};
int main()
{
    student s;
    s.setid(1);
    cout<<"id="<<s.getid();
}