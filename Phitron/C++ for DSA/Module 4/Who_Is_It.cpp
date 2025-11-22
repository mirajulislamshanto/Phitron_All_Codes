#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int total_marks;
    int Id;
    char section;
    char name[100];
};
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        Student a,b,c;
        cin>>a.Id>>a.name>>a.section>>a.total_marks;
        cin>>b.Id>>b.name>>b.section>>b.total_marks;
        cin>>c.Id>>c.name>>c.section>>c.total_marks;

        if(a.total_marks>b.total_marks && a.total_marks>c.total_marks)
        {
            cout<<a.Id<<' '<<a.name <<' '<<a.section<< ' '<<a.total_marks<< endl;
            continue;
        }
        if(b.total_marks>a.total_marks && b.total_marks>c.total_marks)
        {
            cout<<b.Id<<' '<<b.name<<' '<<b.section<<' '<<b.total_marks<< endl;
             continue;
        }
        if(c.total_marks>a.total_marks && c.total_marks>b.total_marks)
        {
            cout<<c.Id<<' '<<c.name<<' '<<c.section<<' '<<c.total_marks<< endl;
             continue;
        }
        
        if(a.total_marks==b.total_marks)
        {
            if(a.Id<b.Id)
            {
                cout<<a.Id<<' '<<a.name <<' '<<a.section<< ' '<<a.total_marks<< endl;
                 continue;
            }
            else
            {
                cout<<b.Id<<' '<<b.name<<' '<<b.section<<' '<<b.total_marks<< endl;
                 continue;
            }
        }
        if(b.total_marks==c.total_marks)
        {
            if(b.Id<c.Id)
            {
                cout<<b.Id<<' '<<b.name <<' '<<b.section<< ' '<<b.total_marks<< endl;
                 continue;
            }
            else
            {
                cout<<c.Id<<' '<<c.name<<' '<<c.section<<' '<<c.total_marks<< endl;
                 continue;
            }
        }
        if(a.total_marks==c.total_marks)
        {
            if(a.Id<c.Id)
            {
                cout<<a.Id<<' '<<a.name <<' '<<a.section<< ' '<<a.total_marks<< endl;
                 continue;
            }
            else
            {
                cout<<c.Id<<' '<<c.name<<' '<<c.section<<' '<<c.total_marks<< endl;
                 continue;
            }
        }
        if(a.total_marks==b.total_marks  && b.total_marks==c.total_marks )
        {
            if(a.Id<c.Id)
            {
                cout<<a.Id<<' '<<a.name <<' '<<a.section<< ' '<<a.total_marks<< endl;
                 continue;
            }
            else
            {
                cout<<c.Id<<' '<<c.name<<' '<<c.section<<' '<<c.total_marks<< endl;
                 continue;
            }
        }

        
    }
    return 0;
}