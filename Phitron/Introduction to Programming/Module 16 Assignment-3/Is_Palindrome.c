#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) 
{
    int count;
    int end=strlen(str)-1;
    while (count<end) 
    {
        if (str[count] != str[end]) 
        {
            return 0;
        }
        count++;
        end--;
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    if (is_palindrome(s))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
