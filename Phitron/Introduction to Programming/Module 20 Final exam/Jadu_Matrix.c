#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for(int i =0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    bool is_jadu = true;
    if(r==c)
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(i==j)
                {
                    if(arr[i][j]!=1)
                    {
                        is_jadu=false;
                    }
                }
                else if(i+j ==r-1)
                {
                    if(arr[i][j]!= 1)
                    {
                        is_jadu=false;
                    }
                }
                else
                {
                    if(arr[i][j] != 0)
                    {
                        is_jadu = false;
                    }
                }
            }
        }
        if(is_jadu==true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
