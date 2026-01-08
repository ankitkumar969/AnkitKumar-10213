#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // One four-leaf clover + (N-1) three-leaf clovers
    int total = 4 + (N - 1) * 3;

    printf("%d", total);

    return 0;
}
