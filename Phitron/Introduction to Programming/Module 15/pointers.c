#include<stdio.h>
int main()
{
    int x=100;
    printf("%d\n",x);
    printf("%p\n",&x); // %p diye address bujhay
    
    int*ptr;
    ptr=&x;
    *ptr=200;
    // printf("%p\n",ptr);
    // printf("%d\n",*ptr); // *ptr dile dereferencing kora hoy
    printf("%d",x); // value theke address e gele reference bole,,,address theke value te gele dereference bole
    return 0;
}