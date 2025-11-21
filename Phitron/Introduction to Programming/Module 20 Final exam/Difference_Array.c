#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) 
    {
        int n;
        scanf("%d",&n);
        int A[n],B[n],C[n];
        for(int i=0;i<n;i++) 
        {
            scanf("%d",&A[i]);
            B[i] = A[i];
        }
        for(int i=0;i<n-1;i++) 
        {
            for(int j =i+1;j<n; j++) 
            {
                if(B[i]>B[j]) 
                {
                    int temp=B[i];
                    B[i]=B[j];
                    B[j]=temp;
                }
            }
        }
        for(int i=0;i<n;i++) 
        {
            if(A[i]>B[i])
                C[i]=A[i]-B[i];
            else
                C[i] = B[i]-A[i];
        }
        for(int i=0;i<n;i++) 
        {
            printf("%d ",C[i]);
        }
        printf("\n");
    }
    return 0;
}
