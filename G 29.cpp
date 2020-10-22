#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter a value"<<endl;
    cin>>x;
    try
    {
    if(x>0)
    {
        cout<<"you entered a positive value";
    }
    else
    {
        throw (x);
    }
    }
    catch(int m)
    {
        cout<<"negative and the value is "<<m<<endl;
    }
    return 0;
}
