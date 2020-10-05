//Here I am using private/protected specifier for class inheritance.. not that derived class object cannot call base class function.But derived class function can call base class function. heres the technique.
#include<iostream>
using namespace std;
class A
{
private:
    int data;
public:
    void getdata()
    {
    cout<<"enter some value"<<endl;
    cin>>data;
    cout<<"this is class A and getdata function"<<endl;
    }
    void show()
    {
    cout<<"your data is "<<data<<endl;
    cout<<"this is class A and show function"<<endl;
    }
};
class B:private A
{
public:
    void helper()
    {
        cout<<"this is class B and helper function"<<endl;
        getdata();
        show();
        cout<<"this is class B and also helper function"<<endl;
    }
};
int main()
{
    B b;
    b.helper();
    cout<<"last line of code"<<endl;
    return 0;
}


