#include <stdio.h>
#include <string.h>

int main() {
    char S[10000001];  // max length 10^7
    scanf("%s", S);

    int freq[26] = {0};

    // Frequency count
    for(int i = 0; S[i] != '\0'; i++) {
        freq[S[i] - 'a']++;
    }

    // Print in ascending order
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
