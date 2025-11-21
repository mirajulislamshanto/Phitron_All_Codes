#include<stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int rows = (n +11)/2;
    int star = 1;
    int space = rows - 1;

    for(int i=1;i<= rows;i++) 
    {
        for(int col=1; col<=space;col++)
        {
            printf(" ");
        } 
        for(int col=1; col<=star;col++) 
        {
            printf("*");
        }    
        printf("\n");
        star += 2;
        space--;
    }
    for(int i=1;i<=5;i++)
    {
        printf("     ");
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
