#include<iostream>
using namespace std;
int main()
{
    int data=200,oven=20;
    int *ptr;
    ptr=&data;
    int **dblptr;
    dblptr=&ptr;
    cout<<**dblptr<<endl<<*ptr<<endl;
    *dblptr=&oven;
    cout<<**dblptr<<endl<<*ptr;


    return 0;
}
