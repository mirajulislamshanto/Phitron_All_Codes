#include<stdio.h>
#include<string.h>
int main()         // include<string.h> jodi fgets or gets function kaj na kore tahole ei header file use korbo
{
    char s[50];
    fgets(s,21,stdin); //fgets use kori space neyar jonno ,// string,size,stdin
    printf("%s",s);  // stdin eta ekta key word
    return 0;        // fgets enter k minput niye code stop hoye jay 
}                    // gets enter k input ney na