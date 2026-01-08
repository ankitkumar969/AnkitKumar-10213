#include <stdio.h>

int main() {
    int L;
    scanf("%d", &L);

    // Check if level is valid
    if (L >= 1 && L <= 5) {
        printf("%d", L * 10);   // Reward = 10 × level
    } else {
        printf("Invalid Level!");
    }

    return 0;
}
