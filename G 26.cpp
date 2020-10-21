#include<iostream>
using namespace std;

template <typename T>
class math
{
    T first,second;
public:
    math()
    {

    }
    math(T a,T b)
    {
        first=a;
        second=b;
    }
void addnumber();
void multiply();
};
template <typename T>
void math<T>::addnumber()
{
    cout<<first+second<<endl;
}
template <typename T>
void math<T>::multiply()
{
    cout<<first*second<<endl;
}


int main()
{
    math<int> obj1(10,20);
    obj1.addnumber();
    obj1.multiply();
    return 0;
}
