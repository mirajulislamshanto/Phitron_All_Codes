#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&a[i]);
    }
    int count2=0;int count3=0;
    for(int i=0;i<N;i++)
    {
        if( a[i]%2 == 0)
        {
            count2++;
        }
        else if ( a[i]%3 == 0)
        {
            count3++;
        }
    }
    printf("%d ",count2);
    printf("%d",count3);
    return 0;
}