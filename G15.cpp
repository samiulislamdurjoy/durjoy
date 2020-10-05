//I created a base class and 3 derived class from the same base class.hierarchical inheritance
#include<iostream>
using namespace std;
class common
{
private:
    string name;
    string gender;
    int age;
public:
    void getinfo()
    {
        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"enter gender "<<endl;
        cin>>gender;
        cout<<"enter age "<<endl;
        cin>>age;
    }
    void show_info()
    {
    cout<<"your data is shown below"<<endl;
    cout<<"name : "<<name<<endl<<"gender : "<<gender<<endl<<"age : "<<age<<endl;
    }
};
class principal:public common
{
    int salary;
public:
    void getsalary()
    {
        cout<<"enter the principal's salary"<<endl;
        cin>>salary;
    }
    void show_salary()
    {
        cout<<"principals salary is : "<<salary<<endl;
    }
};
class teacher:public common
{
    int salary;
public:
    void getsalary()
    {
        cout<<"enter the teacher's salary"<<endl;
        cin>>salary;
    }
    void show_salary()
    {
        cout<<"teacher's salary is : "<<salary<<endl;
    }
};
class student:public common
{
    float grade;
public:
    void get_grade()
    {
        cout<<"enter the student's grade"<<endl;
        cin>>grade;
    }
    void show_grade()
    {
        cout<<"student's grade is : "<<grade<<endl;
    }
};
int main()
{
    student s;
    s.getinfo();
    s.get_grade();
    s.show_info();
    s.show_grade();

    cout<<"last line of code"<<endl;
    return 0;
}


