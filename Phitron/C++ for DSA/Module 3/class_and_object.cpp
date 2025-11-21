#include<bits/stdc++.h>
using namespace std;
class Student
{
    public :
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a,b;  //user defined data type variable object hisebe kaj kortese
    cin.getline(a.name,100); // space er jonno use korsi
    cin  >> a.roll >>a.gpa;
    cin.ignore();
    //getchar();
    cin.getline(b.name,100);
    cin  >> b.roll >>b.gpa;
    
    cout << a.name << " " << a.roll << " "<< a.gpa << endl;
    cout << b.name << " " << b.roll << " "<< b.gpa << endl;
    return 0;
    return 0;

}   