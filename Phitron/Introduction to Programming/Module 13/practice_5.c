#include <stdio.h>

int main() {
    int n = 5; // row সংখ্যা

    for(int i = 1; i <= n; i++) {
        int limit = (i <= 4) ? i : 4; // শেষ row-এ max 4 letter
        for(int j = 0; j < limit; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}