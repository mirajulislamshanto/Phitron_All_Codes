#include<stdio.h>

void even_odd(int num)   // no return (void) + has parameter
{
    if(num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    even_odd(n);   // pass number to function

    return 0;
}
