#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int first, second, third;

                                   // Sorting manually
    if(A <= B && A <= C) 
    {
        first = A;
        if(B <= C) {
            second = B;
            third = C;
        } else {
            second = C;
            third = B;
        }
    } 
    else if(B <= A && B <= C) 
    {
        first = B;
        if(A <= C) {
            second = A;
            third = C;
        } else {
            second = C;
            third = A;
        }
    }
     else 
     {                    // C is smallest
        first = C;
        if(A <= B) {
            second = A;
            third = B;
        } else {
            second = B;
            third = A;
        }
    }

                                                          // Print in ascending order
    printf("%d\n%d\n%d\n\n", first, second, third);

                                                                 // Print in original order
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}
