#include <stdio.h>

int main()
{
    char X[21], Y[21];
    scanf("%s %s", X, Y);

    int i = 0;
    while (X[i]!='\0'&&Y[i] !='\0')
    {
        if (X[i] < Y[i])
        {
            printf("%s", X);
            return 0;
        }
        else if (X[i] > Y[i])
        {
            printf("%s", Y);
            return 0;
        }
        i++;
    }

    if (X[i] == '\0' && Y[i] == '\0')
        printf("%s", X);  
    else if (X[i] == '\0')
        printf("%s", X);  
    else
        printf("%s", Y); 

    return 0;
}
