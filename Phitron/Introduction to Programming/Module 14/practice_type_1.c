#include<stdio.h>

int even_odd(int num)   // function with return + parameter
{
    if(num % 2 == 0)
        return 1;   // return 1 if even
    else
        return 0;   // return 0 if odd
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = even_odd(n);   // call the function and store return value

    if(result == 1)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
