#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for (int i=n;i>=1;i--) // for printing line
    {   
        for(int j=1;j<=n-i;j++)  // for printing space
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)  // for printing  star
        {
            printf("*"); 
        }
        printf("\n");
    }    
    return 0;
}

