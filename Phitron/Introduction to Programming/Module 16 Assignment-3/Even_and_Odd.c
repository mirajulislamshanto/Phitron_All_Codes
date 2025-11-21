#include <stdio.h>
void odd_even()
{
    int n;
    scanf("%d",&n); // array size input
    long long arr[n];

    for (int i=0;i<n;i++) 
    {
        scanf("%lld",&arr[i]); // array input
    }
    int count_even=0,count_odd=0;
    for (int i =0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count_even++;
        }  
        else
        {
            count_odd++;
        }     
    }
    printf("%d %d\n", count_even,count_odd);
}
int main() 
{
    odd_even(); // ফাংশন কল
    return 0;
}
