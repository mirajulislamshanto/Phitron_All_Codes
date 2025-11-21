#include<stdio.h>
void mello()
{
    printf("mello\n");
}
void gello()
{
    printf("gello\n");
    mello();
}
void Hello()
{
    printf("Hello\n");
    gello();
}
int main()
{
    printf("Hi\n");
    Hello();

    return 0;
}