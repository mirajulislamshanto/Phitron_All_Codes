#include <stdio.h>
int main() 
{
    int T;
    scanf("%d",&T);

    for(int i =0;i<T;i++) 
    {
        long long M,A,B,C;
        scanf("%lld %lld %lld %lld",&M,&A,&B,&C);
        long long mul =A*B*C;
        if (M == 0) 
        {
            printf("0\n");
        }
        else if (mul == 0) 
        {
            printf("-1\n");
        }
        else if (M % mul!= 0) 
        {
            printf("-1\n");
        }
        else 
        {
            printf("%lld\n",M/mul);
        }
    }

    return 0;
}
