//same program I made some change inside main function
#include<iostream>
using namespace std;
class A
{
int data;
public:
void getdata()
{
cout<<"enter some value"<<endl;
cin>>data;
}
void show()
{
cout<<"your data is "<<data<<endl;
}
};
class B:public A
{

};
int main()
{
B b;
b.getdata();
b.show();
return 0;
}
