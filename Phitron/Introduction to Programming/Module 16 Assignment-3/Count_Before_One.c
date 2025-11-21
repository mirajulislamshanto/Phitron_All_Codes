#include <stdio.h>
int count_before_one(int arr[],int n) 
{
    int count=0;
    for (int i =0;i<n;i++) 
    {
        if (arr[i]==1)
        {
            break; // 1 পাওয়া গেছে, loop থামাও
        }
        count++; // 1 পাওয়ার আগে সংখ্যা গুনে নাও
    }
    return count;
}
int main() 
{
    int n;
    scanf("%d",&n); // array এর size ইনপুট নাও
    int arr[n];
    // array এর elements ইনপুট নাও
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    // ফাংশন কল করো এবং রিটার্ন মান প্রিন্ট করো
    int result = count_before_one(arr, n);
    printf("%d\n", result);

    return 0;
}
