#include<stdio.h>
#include<string.h>
void fun(char s[],int n) // ekhne aize ta k na patyhaile o cholbe
{
    printf("%s\n",s);
    printf("%d\n",strlen(s));
}
int main()
{
    
    char s[10];
    scanf("%s",&s);
    fun(s,10);
    return 0;
}