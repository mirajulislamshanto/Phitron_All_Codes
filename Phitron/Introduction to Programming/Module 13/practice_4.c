#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=2*n-1;
    for (int i=n;i>=1;i--) // for printing line
    {   
        for(int j=1;j<=n-i;j++)  // for printing space
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)  // for printing  star
        {
            printf("*"); 
        }
        printf("\n");
        star-=2;
    }    
    return 0;
}

