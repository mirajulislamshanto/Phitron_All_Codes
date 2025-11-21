#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char digits[N+1];  // +1 for null character
    scanf("%s", digits);

    long long sum = 0;  // sum বড় হতে পারে
    for(int i = 0; i < N; i++) {
        sum += digits[i] - '0';  // char to int conversion
    }

    printf("%lld\n", sum);

    return 0;
}
