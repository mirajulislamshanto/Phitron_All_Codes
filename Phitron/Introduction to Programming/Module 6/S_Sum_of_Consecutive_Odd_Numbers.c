#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x, &y);
        int max,min;
        if(x>y)
        {
            max = x;
            min =y;
        }
        else
        {
            max =y;
            min =x;  
        }
        int sum=0;
        for(int i=min+1;i<max;i++)
        {   
            if(i%2 !=0)
            {
                sum +=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}