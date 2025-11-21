#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];
    for(int i = 0; i < N; i++) 
    {
        for(int j = 0; j < M; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    for(int i = 0; i < N; i++) 
    {
        for(int j = 0; j < M; j++) 
        {
            if(A[i][j] == X) 
            {
                printf("will not take number\n");
                return 0; // সাথে সাথে প্রোগ্রাম শেষ
            }
        }
    }

    // যদি loop শেষ হয়, X পাওয়া যায়নি
    printf("will take number\n");

    return 0;
}
