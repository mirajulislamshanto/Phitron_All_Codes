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
Student fun()
{
    Student karim(2,5,5);
    return karim;
}
int main()
{
    Student obj=fun();
   
    cout << obj.roll << " " << obj.cls << " "<<obj.gpa << endl;
    
}