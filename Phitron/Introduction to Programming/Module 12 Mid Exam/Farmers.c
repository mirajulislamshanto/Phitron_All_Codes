#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        int newDays = (int)(M1 * D) / (M1 + M2);
        int fewer = (int)(D - newDays);
        
        // if(fewer == 0 && newDays<D)
        // {
        //     fewer = 1;
        // }

        printf("%d\n", fewer);
    }
   
    return 0;
}

