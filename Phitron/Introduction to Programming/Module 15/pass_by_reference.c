#include<stdio.h>
void fun(int* ptr)
{
    *ptr=20;
    // printf("fun function er x er addrss:%p\n",&x);
}
int main()
{
    int x=10;
    fun(&x);
    printf("%d",x);
    // printf("fun function er x er addrss:%p\n",&x);

    return 0;
}