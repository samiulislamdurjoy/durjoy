//I created a base class and 3 derived class from the same base class.hierarchical inheritance
#include<iostream>
using namespace std;
class common
{
public:
    virtual void getname()=0;

};
class principal:public common
{

public:
    void getname()
{
    cout<<"principal class"<<endl;
}
};
class teacher:public common
{

public:
    void getname()
{
    cout<<"teacher class"<<endl;
}

};
class student:public common
{
public:
    void getname()
{
    cout<<"student class"<<endl;
}

};
int main()
{
principal p;teacher t;student s;
p.getname();t.getname();s.getname();

    return 0;
}


