#include<iostream>
using namespace std;
class employee;
class boss
{
    int salary;
public:
    boss()
    {
    }
    boss(int x)
    {
       salary=x;
    }
    void display()
    {
        cout<<"salary of boss is = "<<salary<<endl;
    }
    friend void show(boss,employee);
};
class employee
{
    int salary;
public:
    employee()
    {
    }
    employee(int x)
    {
       salary=x;
    }
    void display()
    {
        cout<<"salary of employee is = "<<salary<<endl;
    }
    friend void show(boss,employee);
};
void show(boss b,employee e)
{
    int total=b.salary+e.salary;
    cout<<"total salary is = "<<total<<endl;
}
int main()
{
    boss b1(3000);
    employee e1(10000);
    b1.display();
    e1.display();
    show(b1,e1);
    return 0;
}
