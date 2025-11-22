#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa) //(variable er man same rakhte rta use korte hoy)
    {
        this->roll=roll;// (*this).roll ekhne this ekta pointer
        this->cls=cls;
        this->gpa=gpa;
    }   
};

Student* fun()
{
    Student* karim=new Student (2,5,5); // dynamic
    return karim;
}
int main()
{
    Student*p=fun();
   
    cout << p->roll << " " << p->cls<< " "<<p->gpa << endl;
    
}