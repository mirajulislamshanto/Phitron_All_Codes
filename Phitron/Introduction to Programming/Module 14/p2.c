#include<stdio.h>

int even_odd()   // no parameter
{
    int num;
    scanf("%d", &num);   // input taken inside the function

    if(num % 2 == 0)
        return 1;   // even
    else
        return 0;   // odd
}

int main()
{
    int result = even_odd();   // call function, get return value

    if(result == 1)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
