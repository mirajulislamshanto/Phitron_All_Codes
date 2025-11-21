#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int consonant_count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
            consonant_count++;
        }
      
    }
    printf("%d",consonant_count);

    return 0;
}