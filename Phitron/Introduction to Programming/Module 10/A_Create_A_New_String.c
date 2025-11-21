#include<stdio.h>
#include <string.h>
int main()
{
    char S[1001],T[1001];
    scanf("%s %s",S,T);

    int length=strlen(S);
    printf("%d ",length);
    
    length=strlen(T);
    printf("%d\n",length);

    printf("%s %s",S,T);
    return 0;
}