#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0],min_idx,max_idx;
    for(int i=0;i<n;i++)
    {  
       if( arr[i]<=min)
       {
        min=arr[i];
        min_idx=i;
       }
       if( arr[i]>=max)
       {
        max=arr[i];
        max_idx=i;
       }
    }
    // arr[min_idx] = max;
    // arr[max_idx] = min;
    int temp;
    temp=arr[min_idx];
    arr[min_idx]=arr[max_idx];
    arr[max_idx]=temp;
    

    
    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }  
        
    return 0;
}