#include<stdio.h>
// return_type finction_name(paraterms)
// {

// }

int sum()
{   
   int a,b;
   scanf("%d %d",&a,&b);
   int ans=a+b; 
   return ans;
}
int main()
{
    
    int ans=sum();
    printf("%d", ans);
    return 0;
} 