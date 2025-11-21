#include<stdio.h>
// Global variable use kore ekhne...
int sum()
{
    int x=20;
    printf("%d ",x);
}
int main()
{
    int x=10; // x variable er scope ta sodho main function 
    printf("%d ",x);
    sum();
    return 0;
}