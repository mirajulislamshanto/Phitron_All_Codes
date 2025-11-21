#include<stdio.h>
int number(int x)
{
    printf("%d", x);
    return 0;
}
   

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        number(i);
        if(i!=n)
        {
            printf(" ");
        }
    }
    return 0;
}