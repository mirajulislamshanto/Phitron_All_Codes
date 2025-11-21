#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N;
    scanf("%d", &N);

    int A[N][N];
    for(int i=0; i<N;i++) 
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int primarySum = 0,secondarySum = 0;
    for(int i=0; i<N;i++)
    {
        for(int j=0;j<N;j++)
        if(i==j)
        {
            primarySum += A[i][j]; 
        }
        else if(i+j==N-1)
        {
            secondarySum += A[i][N-1-i];  
        } 
    }
    int dif=primarySum-secondarySum;
    if(dif<0)
    {
        dif=dif*-1;
    }
    printf("%d",dif);

    return 0;
}
