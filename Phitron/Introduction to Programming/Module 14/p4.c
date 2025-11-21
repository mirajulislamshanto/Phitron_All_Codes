#include<stdio.h>

void even_odd()   // no return, no parameter
{
    int num;
    scanf("%d", &num);   // take input inside the function

    if(num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main()
{
    even_odd();   // call the function (no argument)
    return 0;
}
