#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>> a>>b;
    // if(a>b)
    // {
    //     cout<<a<<endl;
    // }
    // else
    // {
    //     cout<<b<<endl;
    // }
    // cout << min({10,205,6,8}) << endl;
    // cout << max(10,20) << endl;
    // int temp =a;
    // a=b;
    // b=temp;
    swap(a,b);
    cout << a << " " <<b <<endl;
    return 0;
}
 