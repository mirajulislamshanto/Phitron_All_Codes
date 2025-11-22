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
int main()
{
    Student rahim(45,5,3.2);
    Student karim(2,5,5);
    cout << rahim.roll << " " << rahim.cls << " "<<rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " "<<karim.gpa << endl;

    return 0;
}