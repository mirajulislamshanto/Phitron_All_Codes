#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int m;                  // copying 1st array
    scanf("%d",&m);
    int b[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    int c[n+m];              // copying 1st array
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }

    for(int i=0;i<m;i++)     //printing after copy 
    {
        c[i+n]=b[i];
    }
    for(int i=0;i<n+m;i++)
    {
       printf("%d ",c[i]);
    }

    return 0;
}