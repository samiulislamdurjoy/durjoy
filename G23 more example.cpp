#include<iostream>
using namespace std;

class abs
{
public:
    virtual void molla()=0;

};
class baby:public abs
{
public:
    void molla()
    {
        cout<<"baby class"<<endl;
    }
};
class senior:public abs
{
public:
    void molla()
    {
        cout<<"senior class"<<endl;
    }
};

///////experimental part




class extra
{
public:
    void molla()
    {
        cout<<"this is extra class"<<endl;
    }
};
////////// experimental part ended


int main()
{
    baby b;senior s;extra e;
    b.molla();s.molla();e.molla();
    return 0;
}
