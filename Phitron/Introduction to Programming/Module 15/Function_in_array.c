#include<stdio.h>
void fun(int arr[],int n)
{
     for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,n);
    // printf("\n");
    // int arr2[4]={22,23,24,25};
    // fun(arr2,4);
    return 0;
}